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

OBJS = mandelbrot.o

all: clean mandelbrot funcs sim_with_profile

mandelbrot: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o mandelbrot -lhexagon

clean:
	rm -f mandelbrot $(OBJS) pmu_statsfile.txt stats.txt region_profile_description.txt

funcs:
	./mk_rprof_funcs mandelbrot > region_profile_description.txt

sections:
	./mk_rprof_sections mandelbrot > region_profile_description.txt
	
sim_with_profile:
	$(SIM) $(SIMFLAGS) --region_prof region_profile_description.txt mandelbrot
