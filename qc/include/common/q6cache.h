/*****************************************************************
# Copyright (c) $Date$ QUALCOMM INCORPORATED.
# All Rights Reserved.
# Modified by QUALCOMM INCORPORATED on $Date$
*****************************************************************/
#ifndef Q6_CACHE_H
#define Q6_CACHE_H
#include <stdint.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

void q6_buffer_clean (const uint8_t *addr, size_t nbytes);
void q6_buffer_cleaninv (const uint8_t *addr, size_t nbytes);
void q6_buffer_inv (const uint8_t *addr, size_t nbytes);

#ifdef __cplusplus
};
#endif

#endif



