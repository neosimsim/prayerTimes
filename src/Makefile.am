AM_CFLAGS = -Wall -O2
AM_CFLAGS_DEBUG = -DDEBUG -g3 -O0

lib_LTLIBRARIES = libprayertimes.la
libprayertimes_la_SOURCES = astro.c args.c

bin_PROGRAMS = prayertimes
prayertimes_SOURCES = main.c
prayertimes_LDADD = libprayertimes.la

if DEBUG
AM_CFLAGS += $(AM_CFLAGS_DEBUG)
endif

