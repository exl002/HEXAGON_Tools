##################################################################
# Copyright (c) $Date$ QUALCOMM INCORPORATED.
# All Rights Reserved.
# Modified by QUALCOMM INCORPORATED on $Date$
##################################################################

CC	= hexagon-clang
AS	= hexagon-as
CFLAGS	= -O2 -g
Q6VERSION	:= v5

CFLAGS	+= -m${Q6VERSION}
ASFLAGS	+= -m${Q6VERSION}

OBJS = mandelbrot.o

all: clean mandelbrot t32

mandelbrot: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o mandelbrot

clean:
	rm -f mandelbrot $(OBJS) pmu_statsfile.txt stats.txt

t32:
	t32mqdsp6 -c linux.cfg -s hexagon.cmm mandelbrot v5h
