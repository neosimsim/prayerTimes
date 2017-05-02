include ../config.mk

TARG = prtime
OFILES = args.o astro.o main.o

all: ${TARG}
	@strip ${TARG}
	@echo build ${TARG}

${TARG}: ${OFILES}
	${CC} ${LDFLAGS} -o $@ ${OFILES}

.c.o:
	${CC} ${CFLAGS} -o $@ $<

clean:
	rm -f ${OFILES} ${TARG}
