/*****************************************************************
# Copyright (c) $Date$ QUALCOMM INCORPORATED.
# All Rights Reserved.
# Modified by QUALCOMM INCORPORATED on $Date$
*****************************************************************/
/* This header file includes all of the Hexagon data type definitions */
#include <stdio.h>
#include <hexagon_types.h>

int main()
{
  /* "Scalar" use of hexagon data types */
  {
    /* Create a vector from half-words (most-significant half-word on
       the left) */
    HEXAGON_Vect vec1 = HEXAGON_V64_CREATE_H(3,2,1,0);
    
    /* Create a vector from words */
    HEXAGON_Vect vec2 = HEXAGON_V64_CREATE_W(0, 0);
    
    /* Place a value in the 1st halfword (indexed by 0) */
    vec2 = HEXAGON_V64_PUT_H1(vec2, 1);
    
    /* Access the 3rd halfword from vec1 and the 1st halfword from vec2 */
    printf("result = %d\n", HEXAGON_V64_GET_H3(vec1) + HEXAGON_V64_GET_H1(vec2));
  }

  /* Pointer/array use of hexagon data types */
  {
    /* Define an array of ints, 8-byte aligned */
    int in[] __attribute__((aligned(8))) = {1, 2, 3, 4};
    HEXAGON_Vect X;
    /* Create a vector pointer by casting the int pointer */
    HEXAGON_Vect *vIn = (HEXAGON_Vect *)in;

    X = vIn[1]; /* Read 64-bits */
                /* X.high = in[i*2+1] */
                /* X.low = in[i*2] */
    
    printf("X=0x%016llx\n", X);

    /* Store a new value in X */
    X = HEXAGON_V64_CREATE_W(6, 5);

    vIn[0] = X; /* Write 64-bits */
                /* in[i*2+1] = X.high */
                /* in[i*2] = X.low */

    printf("vIn[0]=0x%016llx\n", vIn[0]);
  }
  
  return 0;
}