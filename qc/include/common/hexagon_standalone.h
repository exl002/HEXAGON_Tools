/*****************************************************************
# Copyright (c) $Date$ QUALCOMM INCORPORATED.
# All Rights Reserved.
# Modified by QUALCOMM INCORPORATED on $Date$
*****************************************************************/
#include <stdint.h>

#ifndef _HEXAGON_STANDALONE_H_
#define _HEXAGON_STANDALONE_H_ 1

#define HEXAGON_DEFAULT_PAGE_SIZE  (1048576) /* 1MB */
#define HEXAGON_DEFAULT_PAGE_PERM  (7)       /* XWR */
#define HEXAGON_DEFAULT_PAGE_CACHE (7)       /* L1, WB, NS, L2 */

#ifdef __cplusplus
extern "C" {
#endif

/* Start-up configuration. */
extern void *COMPILE_FOR_RTOS __attribute__ ((weak));

extern void *I_CACHE_ENABLE __attribute__ ((weak));
extern void *I_CACHE_HW_PREFETCH __attribute__ ((weak));

extern void *D_CACHE_ENABLE __attribute__ ((weak));
extern void *D_CACHE_HW_PREFETCH __attribute__ ((weak));

extern void *EVENT_VECTOR_BASE __attribute__ ((weak));

extern void *ENABLE_TRANSLATION __attribute__ ((weak));
extern void *USE_DEFAULT_TLB_MISS_HANDLER __attribute__ ((weak));
extern void *TLB_MAP_TABLE_PTR __attribute__ ((weak));
extern void *ENABLE_64_TLBS __attribute__ ((weak));

extern void *ENABLE_PCYCLE __attribute__ ((weak));

extern void *TCM_BASE_ADDR __attribute__ ((weak));
extern void *L2_CACHE_SIZE __attribute__ ((weak));
extern void *L2_PARITY __attribute__ ((weak));
extern void *L2_WB __attribute__ ((weak));

extern void *STACK_START __attribute__ ((weak));
extern void *STACK_SIZE __attribute__ ((weak));
extern void *HEAP_START __attribute__ ((weak));
extern void *HEAP_SIZE __attribute__ ((weak));

extern void *CORE_DUMP_BASE __attribute__ ((weak));

extern void *ISDB_SECURE_FLAG __attribute__ ((weak));
extern void *ISDB_TRUSTED_FLAG __attribute__ ((weak));
extern void *ISDB_DEBUG_FLAG __attribute__ ((weak));

extern void *ANGEL_SUPPORT __attribute__ ((weak));

extern void (*PRE_INIT) (void) __attribute__ ((weak));
extern void (*POST_EXIT) (void) __attribute__ ((weak));

/* Stand-alone API. */
void add_translation (void *va, void *pa, int cacheability);
void add_translation_fixed (int index, void *va, void *pa, int cacheability,
                            int permissions);
int add_translation_extended (int index, void *va, uint64_t pa,
                              unsigned int page_size, unsigned int xwru,
                              unsigned int cccc, unsigned int asid,
                              unsigned int aa, unsigned int vg);

void register_interrupt (int intno, void (*handler) (int intno));

void lockMutex (int *mutex);
int trylockMutex (int *mutex);
void unlockMutex (int *mutex);

void thread_create (void (*pc) (void *), void *sp, int threadno, void *param);
void thread_stop (void);
void thread_join (int mask);
void thread_stack_size (int threadno, int stack_size);

#ifdef __cplusplus
};
#endif

#if 0
int thread_get_tnum (void);
#else
  /* Use faster inline version instead. */
  #if __HEXAGON_ARCH__ < 4
    #define thread_get_tnum() \
              ({int t; \
                __asm__ __volatile__ \
                  ("%0 = ssr; %0 = extractu (%0, #3, #19);": \
                   "=&r" (t)); \
                t;})
  #else /* __HEXAGON_ARCH__ >= 4 */
    #define thread_get_tnum() \
              ({int t; \
                __asm__ __volatile__ \
                  ("%0 = htid": \
                   "=&r" (t)); \
                t;})
  #endif /* __HEXAGON_ARCH__ >= 4 */
#endif

#endif /* _HEXAGON_STANDALONE_H_ */
