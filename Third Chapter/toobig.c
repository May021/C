/* toobig.c -- ����ϵͳ��������intֵ */
#include <stdio.h>

int main(void)
{
	int i = 2147483647;
	unsigned int j = 5000000000;
	
	printf("%d %d %d\n", i, i+1, i+2);	
	printf("%u %u %u\n", j, j+1, j+2);
	
	return 0;
} 
