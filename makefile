include config.mk

all:
	cd src && ${MAKE}

test:
	cd tests && ${MAKE}

install:
	cd src && ${MAKE} install

uninstall:
	cd src && ${MAKE} uninstall

clean:
	cd src && make clean
	cd tests && make clean
