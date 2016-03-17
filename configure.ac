AC_PREREQ(2.59)

AC_INIT([prayerTimes], [0.1], [neosimsim@posteo.de])
AC_CONFIG_SRCDIR([src/main.c])

AM_INIT_AUTOMAKE

AC_PROG_CC
AM_PROG_LEX
AC_PROG_YACC

LT_INIT

PKG_CHECK_MODULES([CHECK], [check >= 0.10.0])

AC_ARG_ENABLE(debug,
AS_HELP_STRING([--enable-debug],
               [enable debugging, default: no]),
[case "${enableval}" in
             yes) debug=true ;;
             no)  debug=false ;;
             *)   AC_MSG_ERROR([bad value ${enableval} for --enable-debug]) ;;
esac],
[debug=false])

AM_CONDITIONAL(DEBUG, test x"$debug" = x"true")

AC_CONFIG_FILES([Makefile src/Makefile tests/Makefile])

AC_OUTPUT
