##################################################################
# Copyright (c) $Date$ QUALCOMM INCORPORATED.
# All Rights Reserved.
# Modified by QUALCOMM INCORPORATED on $Date$
##################################################################

CC	= hexagon-clang
AS	= hexagon-as
SIM	= hexagon-sim
CFLAGS	= -O2
Q6VERSION	:= v5

CFLAGS	+= -m${Q6VERSION}
ASFLAGS	+= -m${Q6VERSION}
SIMFLAGS+= -m${Q6VERSION} --timing

OBJS = tlb.o 

all: clean tlb sim

tlb: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@ -lhexagon

clean:
	rm -f tlb $(OBJS) pmu_statsfile.txt stats.txt

sim:
	$(SIM) $(SIMFLAGS) tlb
