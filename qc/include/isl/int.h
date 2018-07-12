/*
 * Copyright 2008-2009 Katholieke Universiteit Leuven
 *
 * Use of this software is governed by the MIT license
 *
 * Written by Sven Verdoolaege, K.U.Leuven, Departement
 * Computerwetenschappen, Celestijnenlaan 200A, B-3001 Leuven, Belgium
 */

#ifndef ISL_INT_H
#define ISL_INT_H

#include <isl/hash.h>
#include <isl/config.h>
#include <string.h>
#if defined(USE_GMP_FOR_MP)
#include <gmp.h>
#elif defined(USE_IMATH_FOR_MP)
#include "gmp_compat.h"
#else
#error "Must specify a MP library"
#endif
#if defined(__cplusplus)
#include <iostream>
#endif

#if defined(__cplusplus)
extern "C" {
#endif

#ifndef mp_get_memory_functions
void mp_get_memory_functions(
		void *(**alloc_func_ptr) (size_t),
		void *(**realloc_func_ptr) (void *, size_t, size_t),
		void (**free_func_ptr) (void *, size_t));
#endif

/* isl_int is the basic integer type.  It currently always corresponds
 * to a gmp mpz_t, but in the future, different types such as long long
 * or cln::cl_I will be supported.
 */
#if defined(USE_GMP_FOR_MP)
// Integer data type and operations
typedef mpz_t	isl_int;

#define isl_int_init(i)		mpz_init(i)
#define isl_int_clear(i)	mpz_clear(i)

#define isl_int_set(r,i)	mpz_set(r,i)
#define isl_int_set_gmp(r,i)	mpz_set(r,i)
#define isl_int_set_si(r,i)	mpz_set_si(r,i)
#define isl_int_set_ui(r,i)	mpz_set_ui(r,i)
#define isl_int_get_gmp(i,g)	mpz_set(g,i)
#define isl_int_get_si(r)	mpz_get_si(r)
#define isl_int_get_ui(r)	mpz_get_ui(r)
#define isl_int_get_d(r)	mpz_get_d(r)
#define isl_int_get_str(r)	mpz_get_str(0, 10, r)

#define isl_int_abs(r,i)	mpz_abs(r,i)
#define isl_int_neg(r,i)	mpz_neg(r,i)
#define isl_int_swap(i,j)	mpz_swap(i,j)
#define isl_int_swap_or_set(i,j)	mpz_swap(i,j)
#define isl_int_add_ui(r,i,j)	mpz_add_ui(r,i,j)
#define isl_int_sub_ui(r,i,j)	mpz_sub_ui(r,i,j)

#define isl_int_add(r,i,j)	mpz_add(r,i,j)
#define isl_int_sub(r,i,j)	mpz_sub(r,i,j)
#define isl_int_mul(r,i,j)	mpz_mul(r,i,j)
#define isl_int_mul_2exp(r,i,j)	mpz_mul_2exp(r,i,j)
#define isl_int_mul_ui(r,i,j)	mpz_mul_ui(r,i,j)
#define isl_int_pow_ui(r,i,j)	mpz_pow_ui(r,i,j)
#define isl_int_addmul(r,i,j)	mpz_addmul(r,i,j)
#define isl_int_submul(r,i,j)	mpz_submul(r,i,j)

#define isl_int_gcd(r,i,j)	mpz_gcd(r,i,j)
#define isl_int_lcm(r,i,j)	mpz_lcm(r,i,j)
#define isl_int_divexact(r,i,j)	mpz_divexact(r,i,j)
#define isl_int_divexact_ui(r,i,j)	mpz_divexact_ui(r,i,j)
#define isl_int_tdiv_q(r,i,j)	mpz_tdiv_q(r,i,j)
#define isl_int_cdiv_q(r,i,j)	mpz_cdiv_q(r,i,j)
#define isl_int_fdiv_q(r,i,j)	mpz_fdiv_q(r,i,j)
#define isl_int_fdiv_r(r,i,j)	mpz_fdiv_r(r,i,j)
#define isl_int_fdiv_q_ui(r,i,j)	mpz_fdiv_q_ui(r,i,j)

#define isl_int_read(r,s)	mpz_set_str(r,s,10)

#define isl_int_sgn(i)		mpz_sgn(i)
#define isl_int_cmp(i,j)	mpz_cmp(i,j)
#define isl_int_cmp_si(i,si)	mpz_cmp_si(i,si)
#define isl_int_eq(i,j)		(mpz_cmp(i,j) == 0)
#define isl_int_ne(i,j)		(mpz_cmp(i,j) != 0)
#define isl_int_lt(i,j)		(mpz_cmp(i,j) < 0)
#define isl_int_le(i,j)		(mpz_cmp(i,j) <= 0)
#define isl_int_gt(i,j)		(mpz_cmp(i,j) > 0)
#define isl_int_ge(i,j)		(mpz_cmp(i,j) >= 0)
#define isl_int_abs_eq(i,j)	(mpz_cmpabs(i,j) == 0)
#define isl_int_abs_ne(i,j)	(mpz_cmpabs(i,j) != 0)
#define isl_int_abs_lt(i,j)	(mpz_cmpabs(i,j) < 0)
#define isl_int_abs_gt(i,j)	(mpz_cmpabs(i,j) > 0)
#define isl_int_abs_ge(i,j)	(mpz_cmpabs(i,j) >= 0)


#define isl_int_is_zero(i)	(isl_int_sgn(i) == 0)
#define isl_int_is_one(i)	(isl_int_cmp_si(i,1) == 0)
#define isl_int_is_negone(i)	(isl_int_cmp_si(i,-1) == 0)
#define isl_int_is_pos(i)	(isl_int_sgn(i) > 0)
#define isl_int_is_neg(i)	(isl_int_sgn(i) < 0)
#define isl_int_is_nonpos(i)	(isl_int_sgn(i) <= 0)
#define isl_int_is_nonneg(i)	(isl_int_sgn(i) >= 0)
#define isl_int_is_divisible_by(i,j)	mpz_divisible_p(i,j)

#define isl_int_import(rop,count,order,size,endian,nails,op)	mpz_import(rop,count,order,size,endian,nails,op)
#define isl_int_export(rop,countp,order,size,endian,nails,op)	mpz_export(rop,countp,order,size,endian,nails,op)
#define isl_int_sizeinbase(op,base) mpz_sizeinbase(op,base)

uint32_t isl_gmp_hash(mpz_t v, uint32_t hash);
#define isl_int_hash(v,h)	isl_gmp_hash(v,h)

// Rational data type and operations
typedef mpq_t isl_rat;

#define isl_rat_init(r)       mpq_init(r)
#define isl_rat_clear(r)      mpq_clear(r)
#define isl_rat_set(r,q)      mpq_set(r,q)
#define isl_rat_set_ui(r,a,b) mpq_set_ui(r,a,b)
#define isl_rat_mul(r,p,q)    mpq_mul(r,p,q)
#define isl_rat_cmp(p,q)      mpq_cmp(p,q)
#define isl_rat_sgn(r)        mpq_sgn(r)
#define isl_rat_numref(r)     mpq_numref(r)
#define isl_rat_denref(r)     mpq_denref(r)

//imath definitions
#elif defined(USE_IMATH_FOR_MP)
typedef mp_int isl_int[1];
#define UNWRPZ(i) (*(i))

#define isl_int_init(i)		UNWRPZ(i) = mp_int_alloc()
#define isl_int_clear(i)	mp_int_free(UNWRPZ(i))

#define isl_int_set(r,i)	impz_set(UNWRPZ(r),UNWRPZ(i))
#define isl_int_set_gmp(r,i)	impz_set(UNWRPZ(r),UNWRPZ(i))
#define isl_int_set_si(r,i)	impz_set_si(UNWRPZ(r),i)
#define isl_int_set_ui(r,i)	impz_set_ui(UNWRPZ(r),i)
#define isl_int_get_gmp(i,g)	impz_set(UNWRPZ(g),UNWRPZ(i))
#define isl_int_get_si(r)	impz_get_si(UNWRPZ(r))
#define isl_int_get_ui(r)	impz_get_ui(UNWRPZ(r))
#define isl_int_get_d(r)	impz_get_d(UNWRPZ(r))
#define isl_int_get_str(r)	impz_get_str(0, 10, UNWRPZ(r))
#define isl_int_abs(r,i)	impz_abs(UNWRPZ(r),UNWRPZ(i))
#define isl_int_neg(r,i)	impz_neg(UNWRPZ(r),UNWRPZ(i))
#define isl_int_swap(i,j)	impz_swap(UNWRPZ(i),UNWRPZ(j))
#define isl_int_swap_or_set(i,j)	impz_swap(UNWRPZ(i),UNWRPZ(j))
#define isl_int_add_ui(r,i,j)	impz_add_ui(UNWRPZ(r),UNWRPZ(i),j)
#define isl_int_sub_ui(r,i,j)	impz_sub_ui(UNWRPZ(r),UNWRPZ(i),j)

#define isl_int_add(r,i,j)	impz_add(UNWRPZ(r),UNWRPZ(i),UNWRPZ(j))
#define isl_int_sub(r,i,j)	impz_sub(UNWRPZ(r),UNWRPZ(i),UNWRPZ(j))
#define isl_int_mul(r,i,j)	impz_mul(UNWRPZ(r),UNWRPZ(i),UNWRPZ(j))
#define isl_int_mul_2exp(r,i,j)	impz_mul_2exp(UNWRPZ(r),UNWRPZ(i),j)
#define isl_int_mul_ui(r,i,j)	impz_mul_ui(UNWRPZ(r),UNWRPZ(i),j)
#define isl_int_pow_ui(r,i,j)	impz_pow_ui(UNWRPZ(r),UNWRPZ(i),j)
#define isl_int_addmul(r,i,j)	impz_addmul(UNWRPZ(r),UNWRPZ(i),UNWRPZ(j))
#define isl_int_submul(r,i,j)	impz_submul(UNWRPZ(r),UNWRPZ(i),UNWRPZ(j))

#define isl_int_gcd(r,i,j)	impz_gcd(UNWRPZ(r),UNWRPZ(i),UNWRPZ(j))
#define isl_int_lcm(r,i,j)	impz_lcm(UNWRPZ(r),UNWRPZ(i),UNWRPZ(j))
#define isl_int_divexact(r,i,j)	impz_divexact(UNWRPZ(r),UNWRPZ(i),UNWRPZ(j))
#define isl_int_divexact_ui(r,i,j)	impz_divexact_ui(UNWRPZ(r),UNWRPZ(i),j)
#define isl_int_tdiv_q(r,i,j)	impz_tdiv_q(UNWRPZ(r),UNWRPZ(i),UNWRPZ(j))
#define isl_int_cdiv_q(r,i,j)	impz_cdiv_q(UNWRPZ(r),UNWRPZ(i),UNWRPZ(j))
#define isl_int_fdiv_q(r,i,j)	impz_fdiv_q(UNWRPZ(r),UNWRPZ(i),UNWRPZ(j))
#define isl_int_fdiv_r(r,i,j)	impz_fdiv_r(UNWRPZ(r),UNWRPZ(i),UNWRPZ(j))
#define isl_int_fdiv_q_ui(r,i,j)	impz_fdiv_q_ui(UNWRPZ(r),UNWRPZ(i),j)

#define isl_int_read(r,s)	impz_set_str(UNWRPZ(r),s,10)

#define isl_int_sgn(i)		impz_sgn(UNWRPZ(i))
#define isl_int_cmp(i,j)	impz_cmp(UNWRPZ(i),UNWRPZ(j))
#define isl_int_cmp_si(i,si)	impz_cmp_si(UNWRPZ(i),si)
#define isl_int_eq(i,j)		(impz_cmp(UNWRPZ(i),UNWRPZ(j)) == 0)
#define isl_int_ne(i,j)		(impz_cmp(UNWRPZ(i),UNWRPZ(j)) != 0)
#define isl_int_lt(i,j)		(impz_cmp(UNWRPZ(i),UNWRPZ(j)) < 0)
#define isl_int_le(i,j)		(impz_cmp(UNWRPZ(i),UNWRPZ(j)) <= 0)
#define isl_int_gt(i,j)		(impz_cmp(UNWRPZ(i),UNWRPZ(j)) > 0)
#define isl_int_ge(i,j)		(impz_cmp(UNWRPZ(i),UNWRPZ(j)) >= 0)
#define isl_int_abs_eq(i,j)	(impz_cmpabs(UNWRPZ(i),UNWRPZ(j)) == 0)
#define isl_int_abs_ne(i,j)	(impz_cmpabs(UNWRPZ(i),UNWRPZ(j)) != 0)
#define isl_int_abs_lt(i,j)	(impz_cmpabs(UNWRPZ(i),UNWRPZ(j)) < 0)
#define isl_int_abs_gt(i,j)	(impz_cmpabs(UNWRPZ(i),UNWRPZ(j)) > 0)
#define isl_int_abs_ge(i,j)	(impz_cmpabs(UNWRPZ(i),UNWRPZ(j)) >= 0)


#define isl_int_is_zero(i)	(isl_int_sgn(i) == 0)
#define isl_int_is_one(i)	(isl_int_cmp_si(i,1) == 0)
#define isl_int_is_negone(i)	(isl_int_cmp_si(i,-1) == 0)
#define isl_int_is_pos(i)	(isl_int_sgn(i) > 0)
#define isl_int_is_neg(i)	(isl_int_sgn(i) < 0)
#define isl_int_is_nonpos(i)	(isl_int_sgn(i) <= 0)
#define isl_int_is_nonneg(i)	(isl_int_sgn(i) >= 0)
#define isl_int_is_divisible_by(i,j)	impz_divisible_p(UNWRPZ(i),UNWRPZ(j))

#define isl_int_import(rop,count,order,size,endian,nails,op)	impz_import(UNWRPZ(rop),count,order,size,endian,nails,op)
#define isl_int_export(rop,countp,order,size,endian,nails,op)	impz_export(rop,countp,order,size,endian,nails,UNWRPZ(op))
#define isl_int_sizeinbase(op,base) impz_sizeinbase(UNWRPZ(op),base)

uint32_t isl_imath_hash(isl_int v, uint32_t hash);
#define isl_int_hash(v,h)	isl_imath_hash(v,h)

// Rational data type and operations
typedef struct imath_rat_wrapper{
  mp_rat rat;
  mp_int n;
  mp_int d;
} imath_rat_wrapper;

typedef imath_rat_wrapper isl_rat[1];
mp_int* imath_denref_wrapper(isl_rat r);
mp_int* imath_numref_wrapper(isl_rat r);
#define UNWRPQ(r) (r->rat)

#define isl_rat_init(r)       UNWRPQ(r) = mp_rat_alloc()
#define isl_rat_clear(r)      mp_rat_free(UNWRPQ(r))
#define isl_rat_set(r,q)      impq_set(UNWRPQ(r),UNWRPQ(q))
#define isl_rat_set_ui(r,a,b) impq_set_ui(UNWRPQ(r),a,b)
#define isl_rat_mul(r,p,q)    impq_mul(UNWRPQ(r),UNWRPQ(p),UNWRPQ(q))
#define isl_rat_cmp(p,q)      impq_cmp(UNWRPQ(p),UNWRPQ(q))
#define isl_rat_sgn(r)        impq_sgn(UNWRPQ(r))
#define isl_rat_numref(r)     imath_numref_wrapper(r)
#define isl_rat_denref(r)     imath_denref_wrapper(r)

#endif // isl_int definitions

typedef void (*isl_int_print_gmp_free_t)(void *, size_t);
#define isl_int_free_str(s)					\
	do {								\
		isl_int_print_gmp_free_t gmp_free;			\
		mp_get_memory_functions(NULL, NULL, &gmp_free);		\
		(*gmp_free)(s, strlen(s) + 1);				\
	} while (0)

#define isl_int_print(out,i,width)					\
	do {								\
		char *s;						\
                s = isl_int_get_str(i); 				\
		fprintf(out, "%*s", width, s);				\
		isl_int_free_str(s);                                        \
	} while (0)

#if defined(__cplusplus)
}
#endif

#if defined(__cplusplus)
extern "C" { typedef void (*isl_gmp_free_t)(void *, size_t); }

static inline std::ostream &operator<<(std::ostream &os, isl_int i)
{
	char *s;
	s = isl_int_get_str(i);
	os << s;
	isl_int_free_str(s);
	return os;
}
#endif

#endif
