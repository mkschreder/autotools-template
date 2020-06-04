AC_PREREQ([2.61])
AC_INIT([myproject], [0.1], [info@swedishembedded.com])
AC_CONFIG_AUX_DIR(aux-dist)

AC_ARG_ENABLE([myextrafeature],
    [AC_HELP_STRING([--enable-myextrafeature],
    	[Enable myextrafeature])
	],
    [],
	[]
)

AM_CONDITIONAL([ENABLE_MYEXTRAFEATURE], [test "x$enable_myextrafeature" = "xyes"])
AM_COND_IF([ENABLE_MYEXTRAFEATURE], (
		   AC_DEFINE([ENABLE_MYEXTRAFEATURE], [1], [Enable extra feature]))
)


AM_INIT_AUTOMAKE([foreign])
AC_PROG_CC
AC_PROG_CXX
AC_LANG(C,C++)

AX_COVERAGE

AC_CONFIG_MACRO_DIR([m4])
PKG_PROG_PKG_CONFIG([0.25])

LT_PREREQ([2.2])
LT_INIT([dlopen shared])


AM_MISSING_PROG([AUTOM4TE], [autom4te])
AC_CONFIG_TESTDIR([tests])
AC_CONFIG_FILES([tests/atlocal])

AC_CONFIG_FILES([Makefile include/Makefile src/Makefile mypackage.pc tests/Makefile])

AC_OUTPUT

echo ""

echo "Configuration Parameters:"
echo "target............... ${with_target}"
echo "AR_FLAGS............. ${AR_FLAGS}"
echo "CC................... ${CC}"
echo "CFLAGS............... ${CFLAGS}"
echo "CPP.................. ${CPP}"
echo "CPPFLAGS............. ${CPPFLAGS}"
echo "CXX.................. ${CXX}"
echo "CXXFLAGS............. ${CXXFLAGS}"
echo "HOST................. ${HOST}"
echo "HOSTNAME............. ${HOSTNAME}"
echo "LDFLAGS.............. ${LDFLAGS}"
echo "host................. ${host}"
echo "install prefix ...... ${prefix}"

