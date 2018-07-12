	.section .tcm_code_cached, "ax", @progbits
	
	.global	goo
	.type	goo, @function
goo:
	jumpr	lr
		
	.section .smi_data_uncached, "aw", @progbits
	
	.global	c
c:	.word	0
