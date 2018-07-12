/*
 * Copyright 2008-2009 Katholieke Universiteit Leuven
 *
 * Use of this software is governed by the MIT license
 *
 * Written by Sven Verdoolaege, K.U.Leuven, Departement
 * Computerwetenschappen, Celestijnenlaan 200A, B-3001 Leuven, Belgium
 */

#ifndef ISL_ARG_H
#define ISL_ARG_H

#include <stddef.h>
#include <stdlib.h>

#if defined(__cplusplus)
extern "C" {
#endif

struct isl_arg_choice {
	const char	*name;
	unsigned	 value;
};

struct isl_arg_flags {
	const char	*name;
	unsigned	 mask;
	unsigned	 value;
};

enum isl_arg_type {
	isl_arg_end,
	isl_arg_alias,
	isl_arg_arg,
	isl_arg_bool,
	isl_arg_child,
	isl_arg_choice,
	isl_arg_flags,
	isl_arg_footer,
	isl_arg_int,
	isl_arg_user,
	isl_arg_long,
	isl_arg_ulong,
	isl_arg_str,
	isl_arg_str_list,
	isl_arg_version
};

struct isl_args;

typedef	struct {
	struct isl_arg_choice	*choice;
	unsigned		 default_value;
	unsigned		 default_selected;
	int (*set)(void *opt, unsigned val);
} isl_arg_type_choice;
typedef	struct {
	struct isl_arg_flags	*flags;
	unsigned		 default_value;
} isl_arg_type_flags;
typedef	struct {
	unsigned		 default_value;
	int (*set)(void *opt, unsigned val);
} isl_arg_type_b;
typedef	struct {
	int			default_value;
} isl_arg_type_i;
typedef	struct {
	long			default_value;
	long			default_selected;
	int (*set)(void *opt, long val);
} isl_arg_type_l;
typedef	struct {
	unsigned long		default_value;
} isl_arg_type_ul;
typedef	struct {
	const char		*default_value;
} isl_arg_type_str;
typedef	struct {
	size_t			 offset_n;
} isl_arg_type_str_list;
typedef	struct {
	struct isl_args		*child;
} isl_arg_type_child;
typedef	struct {
	void (*print_version)(void);
} isl_arg_type_version;
typedef	struct {
	int (*init)(void*);
	void (*clear)(void*);
} isl_arg_type_user;

struct isl_arg {
	enum isl_arg_type	 type;
	char			 short_name;
	const char		*long_name;
	const char		*argument_name;
	size_t			 offset;
	const char		*help_msg;
#define ISL_ARG_SINGLE_DASH	(1 << 0)
#define ISL_ARG_BOOL_ARG	(1 << 1)
#define ISL_ARG_HIDDEN		(1 << 2)
	unsigned		 flags;
	union {
		void									*init;
		isl_arg_type_choice		*choice;
		isl_arg_type_flags		*flags;
		isl_arg_type_b				*b;
		isl_arg_type_i				*i;
		isl_arg_type_l				*l;
		isl_arg_type_ul				*ul;
		isl_arg_type_str			*str;
		isl_arg_type_str_list *str_list;
		isl_arg_type_child		*child;
		isl_arg_type_version	*version;
		isl_arg_type_user			*user;
	} u;
};

struct isl_args {
	size_t			 options_size;
	struct isl_arg		*args;
};

#define ISL_ARGS_START_U(s,name)
#define ISL_ARGS_START_C(s,name)												\
	struct isl_arg name ## LIST[];												\
	struct isl_args name = { sizeof(s), name ## LIST };		\
	struct isl_arg name ## LIST[] = {
#define ISL_ARGS_END_U
#define ISL_ARGS_END_C \
	{ isl_arg_end } };

#define ISL_ARG_ALIAS(l) { \
		isl_arg_alias, 0, l,	 \
},

#define ISL_ARG_ARG_U(st,name,f,a,d) \
	static isl_arg_type_str name ## _ ## f = { d };
#define ISL_ARG_ARG_C(st,name,f,a,d) {	\
	/* type					 */ isl_arg_arg,			\
	/* short_name		 */ 0,								\
	/* long_name		 */ 0,								\
	/* argument_name */ a,								\
	/* offset				 */ offsetof(st, f),	\
	/* help_msg			 */ 0,								\
	/* flags				 */ 0,								\
	/* u						 */ &name ## _ ## f		\
},

#define ISL_ARG_FOOTER(h) {							\
	/* type					 */ isl_arg_footer,		\
	/* short_name		 */ 0,								\
	/* long_name		 */ 0,								\
	/* argument_name */ a,								\
	/* offset				 */ -1,								\
	/* help_msg			 */ h,								\
	/* flags				 */ 0,								\
	/* u						 */ NULL							\
},

#define ISL_ARG_CHOICE(st,name,f,s,l,c,d,h) \
	ISL_ARG_USER_OPT_CHOICE(st,name,f,s,l,c,NULL,d,d,h)
#define ISL_ARG_OPT_CHOICE(st,name,f,s,l,c,d,ds,h) \
	ISL_ARG_USER_OPT_CHOICE(st,name,f,s,l,c,NULL,d,ds,h)
#define ISL_ARG_USER_OPT_CHOICE_U(st,name,f,s,l,c,setter,d,ds,h) \
	static isl_arg_type_choice name ## _ ## f = { c, d, ds, setter };
#define ISL_ARG_USER_OPT_CHOICE_C(st,name,f,s,l,c,setter,d,ds,h) { \
	/* type					 */ isl_arg_choice,		\
	/* short_name		 */ s,								\
	/* long_name		 */ l,								\
	/* argument_name */ 0,								\
	/* offset				 */ offsetof(st, f),	\
	/* help_msg			 */ h,								\
	/* flags				 */ 0,								\
	/* u						 */ &name ## _ ## f		\
},

#define _ISL_ARG_BOOL_F_U(st,name,f,o,s,l,setter,d,h,fl) \
	static isl_arg_type_b name ## _ ## f = { d, setter };
#define _ISL_ARG_BOOL_F_C(st,name,f,o,s,l,setter,d,h,fl)	{ \
	/* type					 */ isl_arg_bool,			\
	/* short_name		 */ s,								\
	/* long_name		 */ l,								\
	/* argument_name */ 0,								\
	/* offset				 */ o,								\
	/* help_msg			 */ h,								\
	/* flags				 */ fl,								\
	/* u						 */ &name ## _ ## f		\
},
#define ISL_ARG_BOOL_F(st,name,f,s,l,d,h,fl) \
	_ISL_ARG_BOOL_F(st,name,f,offsetof(st, f),s,l,NULL,d,h,fl)
#define ISL_ARG_BOOL(st,name,f,s,l,d,h) \
	ISL_ARG_BOOL_F(st,name,f,s,l,d,h,0)

#define ISL_ARG_PHANTOM_BOOL_F(s,l,h,fl) \
	/* type					 */ isl_arg_bool,			\
	/* short_name		 */ s,								\
	/* long_name		 */ l,								\
	/* argument_name */ 0,								\
	/* offset				 */ -1,								\
	/* help_msg			 */ h,								\
	/* flags				 */ fl,								\
	/* u						 */ NULL
#define ISL_ARG_PHANTOM_BOOL(s,l,h) \
	ISL_ARG_PHANTOM_BOOL_F(s,l,h,0)

#define ISL_ARG_INT_F_U(st,name,f,s,l,a,d,h,fl) \
	static isl_arg_type_i name ## _ ## f = { d };
#define ISL_ARG_INT_F_C(st,name,f,s,l,a,d,h,fl) { \
	/* type					 */ isl_arg_int,			\
	/* short_name		 */ s,								\
	/* long_name		 */ l,								\
	/* argument_name */ a,								\
	/* offset				 */ offsetof(st, f),	\
	/* help_msg			 */ h,								\
	/* flags				 */ fl,								\
	/* u						 */ &name ## _ ## f		\
},
#define ISL_ARG_INT(st,name,f,s,l,a,d,h) \
	ISL_ARG_INT_F(st,name,f,s,l,a,d,h,0)

#define _ISL_ARG_LONG_U(st,name,f,s,lo,setter,d,ds,h) \
	static isl_arg_type_l name ## _ ## f = { d, ds, setter };
#define _ISL_ARG_LONG_C(st,name,f,s,lo,setter,d,ds,h) { \
	/* type					 */ isl_arg_long,			\
	/* short_name		 */ s,								\
	/* long_name		 */ lo,								\
	/* argument_name */ 0,								\
	/* offset				 */ offsetof(st, f),	\
	/* help_msg			 */ h,								\
	/* flags				 */ 0,								\
	/* u						 */ &name ## _ ## f		\
},
#define ISL_ARG_LONG(st,name,f,s,lo,d,h) \
	_ISL_ARG_LONG(st,name,f,s,lo,NULL,d,d,h)
#define ISL_ARG_USER_LONG(st,name,f,s,lo,setter,d,h) \
	_ISL_ARG_LONG(st,name,f,s,lo,setter,d,d,h)
#define ISL_ARG_OPT_LONG(st,name,f,s,lo,d,ds,h) \
	_ISL_ARG_LONG(st,name,f,s,lo,NULL,d,ds,h)

#define ISL_ARG_ULONG_U(st,name,f,s,l,d,h) \
	static isl_arg_type_ul name ## _ ## f = { d };
#define ISL_ARG_ULONG_C(st,name,f,s,l,d,h) { \
	/* type					 */ isl_arg_ulong,		\
	/* short_name		 */ s,								\
	/* long_name		 */ l,								\
	/* argument_name */ 0,								\
	/* offset				 */ offsetof(st, f),	\
	/* help_msg			 */ h,								\
	/* flags				 */ 0,								\
	/* u						 */ &name ## _ ## f		\
},

#define ISL_ARG_STR_F_U(st,name,f,s,l,a,d,h,fl) \
	static isl_arg_type_str name ## _ ## f = { d };
#define ISL_ARG_STR_F_C(st,name,f,s,l,a,d,h,fl) { \
	/* type					 */ isl_arg_str,			\
	/* short_name		 */ s,								\
	/* long_name		 */ l,								\
	/* argument_name */ a,								\
	/* offset				 */ offsetof(st, f),	\
	/* help_msg			 */ h,								\
	/* flags				 */ fl,								\
	/* u						 */ &name ## _ ## f		\
},
#define ISL_ARG_STR(st,name,f,s,l,a,d,h) \
	ISL_ARG_STR_F(st,name,f,s,l,a,d,h,0)

#define ISL_ARG_STR_LIST_U(st,name,f_n,f_l,s,l,a,h) \
	static isl_arg_type_str name ## _ ## f = { offsetof(st, f_n) };
#define ISL_ARG_STR_LIST_C(st,name,f_n,f_l,s,l,a,h) { \
	/* type					 */ isl_arg_str_list, \
	/* short_name		 */ s,								\
	/* long_name		 */ l,								\
	/* argument_name */ a,								\
	/* offset				 */ offsetof(st, f_l),\
	/* help_msg			 */ h,								\
	/* flags				 */ 0,								\
	/* u						 */ &name ## _ ## f		\
},

#define _ISL_ARG_CHILD_U(name,f,o,l,c,h,fl) \
	static isl_arg_type_child name ## _ ## f = { c };
#define _ISL_ARG_CHILD_C(name,f,o,l,c,h,fl) { \
	/* type					 */ isl_arg_child,		\
	/* short_name		 */ 0,								\
	/* long_name		 */ l,								\
	/* argument_name */ 0,								\
	/* offset				 */ o,								\
	/* help_msg			 */ h,								\
	/* flags				 */ fl,								\
	/* u						 */ &name ## _ ## f		\
},
#define ISL_ARG_CHILD(st,name,f,l,c,h) \
	_ISL_ARG_CHILD(name,f,offsetof(st, f),l,c,h,0)


#define ISL_ARG_GROUP_F(c,h,fl) \
	_ISL_ARG_CHILD(-1,NULL,c,h,fl)
#define ISL_ARG_GROUP(c,h) \
	ISL_ARG_GROUP_F(c,h,0)


#define ISL_ARG_FLAGS_U(st,name,f,s,l,c,d,h) \
	static isl_arg_type_flags name ## _ ## f = { c, d };
#define ISL_ARG_FLAGS_C(st,name,f,s,l,c,d,h) { \
	/* type					 */ isl_arg_flags,		\
	/* short_name		 */ s,								\
	/* long_name		 */ l,								\
	/* argument_name */ 0,								\
	/* offset				 */ offsetof(st, f),	\
	/* help_msg			 */ h,								\
	/* flags				 */ 0,								\
	/* u						 */ &name ## _ ## f		\
},


#define ISL_ARG_USER_U(st,name,f,i,c) \
	static isl_arg_type_version name ## _ ## f = { i, c };
#define ISL_ARG_USER_C(st,name,f,i,c) { \
	/* type					 */ isl_arg_user,			\
	/* short_name		 */ 0,								\
	/* long_name		 */ 0,								\
	/* argument_name */ 0,								\
	/* offset				 */ offsetof(st, f),	\
	/* help_msg			 */ 0,								\
	/* flags				 */ 0,								\
	/* u						 */ &name ## _ ## f		\
},

#define ISL_ARG_VERSION_U(st,name,f,print) \
	static isl_arg_type_version name ## _ ## f = { print };
#define ISL_ARG_VERSION_C(st,name,f,print) { \
	/* type					 */ isl_arg_version,	\
	/* short_name		 */ 0,								\
	/* long_name		 */ 0,								\
	/* argument_name */ 0,								\
	/* offset				 */ -1,								\
	/* help_msg			 */ 0,								\
	/* flags				 */ 0,								\
	/* u						 */ &name ## _ ## f		\
},

#define ISL_ARG_ALL		(1 << 0)
#define ISL_ARG_SKIP_HELP	(1 << 1)

void isl_args_set_defaults(struct isl_args *args, void *opt);
void isl_args_free(struct isl_args *args, void *opt);
int isl_args_parse(struct isl_args *args, int argc, char **argv, void *opt,
	unsigned flags);

#define ISL_ARG_DECL(prefix,st,args)																			 \
	extern struct isl_args args;																						 \
	st *prefix ## _new_with_defaults(void);																	 \
	void prefix ## _free(st *opt);																					 \
	int prefix ## _parse(st *opt, int argc, char **argv, unsigned flags);

#define ISL_ARG_DEF(prefix,st,args)																				 \
	st *prefix ## _new_with_defaults()																			 \
	{																																				 \
		st *opt = (st *)calloc(1, sizeof(st));																 \
		if (opt)																															 \
			isl_args_set_defaults(&(args), opt);																 \
		return opt;																														 \
	}																																				 \
																																					 \
	void prefix ## _free(st *opt)																						 \
	{																																				 \
		isl_args_free(&(args), opt);																					 \
	}																																				 \
																																					 \
	int prefix ## _parse(st *opt, int argc, char **argv, unsigned flags)		 \
	{																																				 \
		return isl_args_parse(&(args), argc, argv, opt, flags);								 \
	}

#if defined(__cplusplus)
}
#endif

#endif
