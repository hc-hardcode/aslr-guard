/*  DO NOT EDIT THIS FILE.

    It has been auto-edited by fixincludes from:

	"fixinc/tests/inc/sys/va_list.h"

    This had to be done to correct non-standard usages in the
    original, manufacturer supplied header file.  */



#if defined( SOLARIS_SYS_VA_LIST_CHECK )
#ifdef __GNUC__
typedef __builtin_va_list __va_list;
#else
#if defined(__STDC__) && !defined(__ia64)
typedef void *__va_list;
#else
typedef char *__va_list;
#endif
#endif
#endif  /* SOLARIS_SYS_VA_LIST_CHECK */