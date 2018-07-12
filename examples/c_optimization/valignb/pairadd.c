/*****************************************************************
# Copyright (c) $Date$ QUALCOMM INCORPORATED.
# All Rights Reserved.
# Modified by QUALCOMM INCORPORATED on $Date$
*****************************************************************/
#include <hexagon_types.h>

/* This original function adds two adjacent elements in an input array
   and stores them to the output array.  The assumption is that the
   output and input arrays are both aligned to 8-byte boundaries.
   However, the accesses inside the loop show that In[i+1] will be
   misaligned.  The following versions of the function show how to use
   valignb to correct for this.  */
void
pairadd_orig(unsigned short int *In, 
             unsigned short int *__restrict Out,
             int samples)
{
  int i;
  for (i = 0; i < samples; i++) {
    Out[i] = In[i] + In[i+1];
  }
}


/* This example shows how to use the valignb intrinsic to achieve an
   unaligned load.  To do this, two aligned loads are needed to
   retrieve 16-byte range.  Then, the valignb intrinsic is used to
   select the appropriate 8-bytes from that 16-byte range.  In this
   case, the alignment is off by 1 element.  Since the element is a
   short, the valignb intrinsic is called with an offset of 2-bytes.
   The output array is already aligned, so it needs no adjustment.  */
void
pairadd_vector(unsigned short int *In, 
               unsigned short int *__restrict Out,
               int samples)
{
  int i;
  HEXAGON_Vect *vIn = (HEXAGON_Vect*)In;
  HEXAGON_Vect *vOut = (HEXAGON_Vect*__restrict)Out;

  for (i = 0; i < samples/4; i++) {
    HEXAGON_Vect in0 = vIn[i];
    HEXAGON_Vect in4 = vIn[i+1];
    HEXAGON_Vect in1;
    in1 = Q6_P_valignb_PPI(in4, in0, 2);
    vOut[i] = Q6_P_vaddh_PP(in0, in1);
  }
}


/* Because valignb needs two adjacent 8-byte loads to access the
   desired data, and the loop consumes 8-bytes per iteration (per
   array), there is an 8-byte overlap between consecutive iterations.
   In other words, there is a redundant load each iteration.  This can
   easily be eliminated by "forwarding" the data from one iteration to
   the next.  This reduces the number of loads needed in each
   iteration, because one load is replaced with a copy of the data
   from the previous iteration.  */
void
pairadd_vector_forward(unsigned short int *In, 
                       unsigned short int *__restrict Out,
                       int samples)
{
  int i;
  HEXAGON_Vect *vIn = (HEXAGON_Vect*)In;
  HEXAGON_Vect *vOut = (HEXAGON_Vect*__restrict)Out;
  HEXAGON_Vect in0 = vIn[0];

  for (i = 0; i < samples/4; i++) {
    HEXAGON_Vect in4 = vIn[i+1];
    HEXAGON_Vect in1;
    in1 = Q6_P_valignb_PPI(in4, in0, 2);
    vOut[i] = Q6_P_vaddh_PP(in0, in1);
    in0 = in4;
  }
}
