########################################################################
# Copyright (c) Date: Tue Aug 26 16:38:42 CDT 2008 QUALCOMM INCORPORATED 
# All Rights Reserved 
# Modified by QUALCOMM INCORPORATED on Tue Aug 26 16:38:42 CDT 2008 
########################################################################


AS=hexagon-as
CC=hexagon-clang
LD=hexagon-ld
LDFLAGS=-Wl,-tcm

.PHONY: all clean

all: sectionc sections

clean:
	${RM} sectionc sections *.o

sectionsc: sectionc.o

sections: sections.o
	${LD} -tcm -o $@ $^
