#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

#include <hexagon_standalone.h>

#define PROBE_VALU (0xdeadbeef)
#define PROBE_ALGN (4096)
#define PROBE_PAGE (HEXAGON_DEFAULT_PAGE_SIZE)

int main (void)
{
  static volatile const int nProbe __attribute__ ((section (".rodata"))) = PROBE_VALU;
  void *pProbe;
  volatile int *iProbe;

  __asm__ __volatile__ ("%0 = sp;": "=r" (pProbe)); /* Get TOS. */
  pProbe  = (ptrdiff_t) pProbe & -PROBE_PAGE;       /* Get TOS PN. */
  pProbe += (ptrdiff_t) PROBE_PAGE;                 /* Get next PN. */
  pProbe += (ptrdiff_t) &nProbe & ~-PROBE_PAGE;     /* Get offset from base. */

  iProbe = pProbe;

  /* Add an alias mapping with write permission. */
  add_translation_fixed
    (1, (void *) pProbe, (void *) &nProbe, HEXAGON_DEFAULT_PAGE_CACHE, 1);

  if (*iProbe != nProbe)
  {
    printf ("Failed reading: %08x != %08x\n", *iProbe, nProbe);
    return (EXIT_FAILURE);
  }

  *iProbe = ~*iProbe;
  if (*iProbe != nProbe)
  {
    printf ("Failed writing: %08x != %08x\n", *iProbe, nProbe);
    return (EXIT_FAILURE);
  }

  puts ("Success!");
  return (EXIT_SUCCESS);
}
