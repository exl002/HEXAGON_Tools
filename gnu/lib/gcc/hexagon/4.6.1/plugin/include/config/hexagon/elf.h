
/*-------------------------------------
Controlling the Compilation Driver, gcc
-------------------------------------*/

/* Pass -march=, -G, etcetera on to the assembler. */
#undef ASM_SPEC
#define ASM_SPEC "%{march=*} %{G*} %{mno-dealloc_return}"

/* Copied from config/svr4.h and modified to forward the -G option's argument
   and to not forward the -b option to the linker. */
#undef	LINK_SPEC
/* FIXME: This CROSS_COMPILE test does not work, so has been hardwired.  */
#if 1 || defined(CROSS_COMPILE)
#define LINK_SPEC "%{h*} %{v:-V} \
                   %{dynamic: -Bdynamic} \
		   %{shared:-G -dy -z text} \
		   %{symbolic:-Bsymbolic -G -dy -z text} \
                   %{G*} \
       %{!shared: \
         %{!static: \
       %{rdynamic:-export-dynamic}} \
       %{static:-dn -Bstatic}} \
		   %{YP,*} \
		   %{Qy:} %{!Qn:-Qy}"
#else /* !CROSS_COMPILE */
#define LINK_SPEC "%{h*} %{v:-V} \
                   %{dynamic: -Bdynamic} \
		   %{shared:-G -dy -z text} \
		   %{symbolic:-Bsymbolic -G -dy -z text} \
                   %{G*} \
       %{!shared: \
         %{!static: \
       %{rdynamic:-export-dynamic}} \
       %{static:-dn -Bstatic}} \
		   %{YP,*} \
		   %{!YP,*:%{p:-Y P,/usr/ccs/lib/libp:/usr/lib/libp:/usr/ccs/lib:/usr/lib} \
		    %{!p:-Y P,/usr/ccs/lib:/usr/lib}} \
		   %{Qy:} %{!Qn:-Qy}"
#endif /* !CROSS_COMPILE */


/*------------
Storage Layout
------------*/

/* ??? Is this right? */
#undef MAX_OFILE_ALIGNMENT
#define MAX_OFILE_ALIGNMENT ((1 << 16) * BITS_PER_UNIT)

#undef ASM_PREFERRED_EH_DATA_FORMAT
#define ASM_PREFERRED_EH_DATA_FORMAT(CODE, GLOBAL) \
  (flag_pic  ?  \
    (((GLOBAL) ? DW_EH_PE_indirect : 0) | DW_EH_PE_pcrel) \
       : DW_EH_PE_absptr)
