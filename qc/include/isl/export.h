#ifndef __isl_export_H
#define __isl_export_H

#ifdef isl_BUILT_AS_STATIC
#	 define __isl_export
#	 define ISL_NO_EXPORT
#else
#	 ifndef __isl_export
#		 ifdef _MSC_VER
#			 ifdef isl_EXPORTS
					/* We are building this library */
#				 define __isl_export __declspec(dllexport)
#			 else
					/* We are using this library */
#				 define __isl_export __declspec(dllimport)
#			 endif
#		 else
#			 define __isl_export
#		 endif
#	 endif

#	 ifndef ISL_NO_EXPORT
#		 define ISL_NO_EXPORT
#	 endif
#endif

#endif
