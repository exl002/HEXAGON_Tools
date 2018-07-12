########################################################################
# Copyright (c) Date: Tue Aug 26 16:38:42 CDT 2008 QUALCOMM INCORPORATED 
# All Rights Reserved 
# Modified by QUALCOMM INCORPORATED on Tue Aug 26 16:38:42 CDT 2008 
########################################################################


AS=hexagon-as
CC=hexagon-clang
LD=hexagon-ld

.PHONY: all clean

all: common0 common16

clean:
	${RM} common0 common16 *.o

common0: common.o
	${LD} -G 0 -o $@ $^

common16: common.o
	${LD} -G 16 -o $@ $^
