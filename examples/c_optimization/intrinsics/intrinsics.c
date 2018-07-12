/*****************************************************************
# Copyright (c) $Date$ QUALCOMM INCORPORATED.
# All Rights Reserved.
# Modified by QUALCOMM INCORPORATED on $Date$
*****************************************************************/
#include <hexagon_types.h>

/* This original function multiplies an input array of complex numbers
   and stores the output in an output array.  This is the
   straightforward implementation of complex multiply. */
void cmpy_orig (short int *In1, short int *In2, int *Out, int samples) {
  int i = 0;
  for (i = 0 ; i < samples; i+=2) {
    short a = In1[i+0];
    short b = In1[i+1];
    short c = In2[i+0];
    short d = In2[i+1];
    Out[i+0] = (a*c) - (b*d);
    Out[i+1] = (a*d) + (b*c);
  }
  return;
}



/* This function uses the C intrinsic for complex multiply.  The
   intrinsic is used just like a C function, but in the final assembly
   code it will be emitted as the cmpy operation.  The intrinsic
   allows C programmers to leverage very powerful assembly-level
   operations without writing an entire procedure in assembly.
   Additionaly, the compiler understands the intrinsic operation
   internally, and thus can apply various compiler optimizations on
   the code containing the intrinsic. Also, note how the code snippet
   is much shorter than the plain-C implementation. For the best
   understanding of what happens to the code, just view the assembly
   output by compiling with "-S".  */
void cmpy_intrinsic (short int *In1, short int *In2, int *Out, int samples) {
  int i = 0;
  for (i = 0 ; i < samples/2 ; i++) {
    HEXAGON_Vect32 a = ((HEXAGON_Vect32*)In1)[i+0];
    HEXAGON_Vect32 b = ((HEXAGON_Vect32*)In2)[i+0];
    ((HEXAGON_Vect *)Out)[i] = Q6_P_cmpy_RR_sat(a, b);
  }
  return;
}
