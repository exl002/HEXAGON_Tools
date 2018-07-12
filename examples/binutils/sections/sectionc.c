/***************************************************************************
* Copyright (c) Date: Tue Aug 26 16:58:15 CDT 2008 QUALCOMM INCORPORATED 
* All Rights Reserved 
* Modified by QUALCOMM INCORPORATED on Tue Aug 26 16:58:15 CDT 2008 
****************************************************************************/ 


void foo (void);
void bar (void) __attribute__ ((section (".smi_code_cached")));

int a;
int b __attribute__ ((section (".tcm_data_cached_wt")));
			
void foo (void)
{
  a = b;
}
						  		
void bar (void)
{
  b = a;
}

int main (void)
{
  return (0);
}
