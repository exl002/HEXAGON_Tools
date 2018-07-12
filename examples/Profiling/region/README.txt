########################################################################
# Copyright (c) Date: Tue Aug 26 16:38:28 CDT 2008 QUALCOMM INCORPORATED 
# All Rights Reserved 
# Modified by QUALCOMM INCORPORATED on Tue Aug 26 16:38:28 CDT 2008 
########################################################################

mandelbrot example:
The mandelbrot.c application was chosen to demonstrate the capabilities of the gprof
since it spawns multiple worker threads during its execution. Each "compute_fractal" 
worker thread creates a part of the mandelbrot fractal. After completing of the computation, 
a worker thread locks a mutex (Mx) and writes to the image buffer. The master thread 
(thread 0) then displays the contents of the image buffer and releases the mutex.

Running Example:
1) make			<-- Cleans/builds/runs the simulation with profiling enabled

Result:
make: This simulation will usually takes a bit of time to perform the required 
calculations for v4 or lower architectures. It is usually quick for v5. When the 
calculations are done, the output is displayed, followed by a printout of the mandelbrot 
fractal.

The region profile statistics is appended to the end of the stats.txt file.
Alternately, the developer is also encouraged to test out the "sections" in 
the makefile.