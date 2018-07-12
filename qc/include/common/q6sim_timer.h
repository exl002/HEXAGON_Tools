/*****************************************************************
# Copyright (c) 2013 QUALCOMM INCORPORATED.
# All Rights Reserved.
# Modified by QUALCOMM INCORPORATED on $Date$
*****************************************************************/
#ifndef Q6SIM_TIMER_H
#define Q6SIM_TIMER_H

/** Disable Simulator Timer Option. */
//#define Q6SIM_TIMER_DISABLE 1

#include <stdio.h>

/*
   Use these functions to time your code, like this:

main()
{
  q6sim_init_timer();
  ...
  q6sim_start_timer();
  CODE_I_CARE_ABOUT();
  q6sim_end_timer();
  ...
  q6sim_show_timer(stdout);
}

*/

#ifdef __cplusplus
extern "C" {
#endif

/** Initialize and start timer. */
void q6sim_init_timer(void);
/** Clear timer to start values. */
void q6sim_clear_timer(void);
/** Start timer. */
void q6sim_start_timer(void);
/** End/Stop timer. */
void q6sim_end_timer(void);
/** Show/Print timer values to file. */
void q6sim_show_timer(FILE *file);

#ifdef Q6SIM_TIMER_DISABLE
/** STUB: return current thread tcycles DEPRECATED on V5+ Architectures. */
#define q6sim_read_cycles() 0

/** STUB: return thread tnum's cycle DEPRECATED on V5+ Architectures. */
#define q6sim_read_tcycles(tnum) 0

/** STUB: return processor cycles. */
#define q6sim_read_pcycles() 0
#else
/** return current thread tcycles DEPRECATED on V5+ Architectures. */
unsigned long long q6sim_read_cycles(void);

/** return thread tnum's cycles DEPRECATED on V5+ Architectures.
    tnum [1..number of threads] (0 is invalid thread number). */
unsigned long long q6sim_read_tcycles(int tnum);

/** return processor cycles. */
unsigned long long q6sim_read_pcycles(void);
#endif

/** Simulator profiling on. */
void q6sim_prof_on(void);
/** Simulator profiling off. */
void q6sim_prof_off(void);
/** Write event to simulator log file. */
int  q6sim_log(char *event);

#ifdef __cplusplus
};
#endif

#endif
