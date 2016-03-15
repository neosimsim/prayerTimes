AM_CFLAGS = -Wall -O2
AM_CFLAGS_DEBUG = -DDEBUG -g3 -O0

lib_LTLIBRARIES = libastro.la
libastro_la_SOURCES = astro.c

bin_PROGRAMS = prayertimes
prayertimes_SOURCES = main.c args.c
prayertimes_LDADD = libastro.la

if DEBUG
AM_CFLAGS += $(AM_CFLAGS_DEBUG)
endif

