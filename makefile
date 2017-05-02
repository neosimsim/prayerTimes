include config.mk

all:
	cd src && ${MAKE}

test:
	cd tests && ${MAKE}

clean:
	cd src && make clean
	cd tests && make clean
