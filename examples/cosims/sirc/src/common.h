#ifndef __COMMON_H__
#define __COMMON_H__
#ifdef INTERFACE
#undef INTERFACE
#endif
#ifdef CYGPC
#define INTERFACE __declspec (dllexport)
#else
#define INTERFACE
#endif
#endif
