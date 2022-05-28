-include confing.mk

esh:
	cc main.c -o esh

install: esh
	cp esh ${PREFIX}/bin
