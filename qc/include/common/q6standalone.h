/*****************************************************************
# Copyright (c) $Date$ QUALCOMM INCORPORATED.
# All Rights Reserved.
# Modified by QUALCOMM INCORPORATED on $Date$
*****************************************************************/

#ifndef _Q6STANDALONE_H_
#define _Q6STANDALONE_H_ 1

#ifdef __qdsp6__
#include "hexagon_standalone.h"

#define QDSP6_DEFAULT_PAGE_SIZE  HEXAGON_DEFAULT_PAGE_SIZE  
#define QDSP6_DEFAULT_PAGE_PERM  HEXAGON_DEFAULT_PAGE_PERM  
#define QDSP6_DEFAULT_PAGE_CACHE HEXAGON_DEFAULT_PAGE_CACHE 

#else /* #ifdef __qdsp6__ */

#error The q6standalone.h header file is deprecated.  Please use hexagon_standalone.h or the -mqdsp6-compat command line option instead.

#endif /* #ifdef __qdsp6__ */

#endif /* _Q6STANDALONE_H_ */
