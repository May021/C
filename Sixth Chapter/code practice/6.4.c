#include <stdio.h>
int main(void)
{
	int i, j ;
	char letters = 'A';
	
	for(i=0 ; i<6 ; i++)
	{
		for(j=0 ; j<i+1 ; j++, letters++)
		{
			printf("%c", letters); 	
		}
		printf("\n");
	}
	
	return 0;
}
