include ../config.mk
.SUFFIXES: .test

TESTCFLAGS = ${CFLAGS} -I /home/neosimsim/.local/include
# Is it possibel to at LDFLAGS without static? static breaks building check
TESTLDFLAGS = -lcheck -lm -lpthread -lrt -Wall -L /home/neosimsim/.local/lib
OBJ = ../src/astro.o

TFILES = astro_test.test

test: testrunner
	./testrunner

testrunner: ${TFILES}
	${CC} ${TESTLDFLAGS} -o $@ ${TFILES} ${OBJ}

.c.test:
	${CC} ${TESTCFLAGS} -o $@ $<

clean:
	rm testrunner ${TFILES}
