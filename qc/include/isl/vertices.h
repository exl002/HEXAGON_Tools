#ifndef ISL_VERTICES_H
#define ISL_VERTICES_H

#include <isl/set_type.h>

#if defined(__cplusplus)
extern "C" {
#endif

struct isl_external_vertex;
typedef struct isl_external_vertex	isl_vertex;

struct isl_cell;
typedef struct isl_cell		isl_cell;

struct isl_vertices;
typedef struct isl_vertices	isl_vertices;

__isl_export isl_ctx *isl_vertex_get_ctx(__isl_keep isl_vertex *vertex);
__isl_export int isl_vertex_get_id(__isl_keep isl_vertex *vertex);
__isl_export __isl_give isl_basic_set *isl_vertex_get_domain(__isl_keep isl_vertex *vertex);
__isl_export __isl_give isl_basic_set *isl_vertex_get_expr(__isl_keep isl_vertex *vertex);
__isl_export void isl_vertex_free(__isl_take isl_vertex *vertex);

__isl_export __isl_give isl_vertices *isl_basic_set_compute_vertices(
	__isl_keep isl_basic_set *bset);
__isl_export isl_ctx *isl_vertices_get_ctx(__isl_keep isl_vertices *vertices);
__isl_export int isl_vertices_get_n_vertices(__isl_keep isl_vertices *vertices);
__isl_export int isl_vertices_foreach_vertex(__isl_keep isl_vertices *vertices,
	int (*fn)(__isl_take isl_vertex *vertex, void *user), void *user);
__isl_export void isl_vertices_free(__isl_take isl_vertices *vertices);

__isl_export isl_ctx *isl_cell_get_ctx(__isl_keep isl_cell *cell);
__isl_export __isl_give isl_basic_set *isl_cell_get_domain(__isl_keep isl_cell *cell);
__isl_export int isl_cell_foreach_vertex(__isl_keep isl_cell *cell,
	int (*fn)(__isl_take isl_vertex *vertex, void *user), void *user);
__isl_export void isl_cell_free(__isl_take isl_cell *cell);

__isl_export int isl_vertices_foreach_cell(__isl_keep isl_vertices *vertices,
	int (*fn)(__isl_take isl_cell *cell, void *user), void *user);

#if defined(__cplusplus)
}
#endif

#endif
