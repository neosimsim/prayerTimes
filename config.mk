# Customize to fit your system

PREFIX = /usr/local
VERSION = 0.1
CFLAGS += -Wall -O2 -c -DDEBUG -DVERSION=\"${VERSION}\"
LDFLAGS += -static
AR = ar ac
CC = cc
