##################################################################
# Copyright (c) $Date$ QUALCOMM INCORPORATED.
# All Rights Reserved.
# Modified by QUALCOMM INCORPORATED on $Date$
##################################################################

CC	= hexagon-clang
CFLAGS	= -O2
Q6VERSION	= v5
CFLAGS	+= -m${Q6VERSION}

all: clean vectoradd sim

OBJS = vectoradd.o test_vectoradd.o

vectoradd: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o vectoradd -lhexagon

clean:
	rm -f vectoradd $(OBJS) pmu_statsfile.txt stats.txt

sim:
	hexagon-sim --timing vectoradd
