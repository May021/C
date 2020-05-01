#include <stdio.h>
int main(void)
{
	int i , j;
	char letters[26];
	
	for(i=0 ; i<6 ; i++)
	{
		for(j=0 ; j<i+1 ; j++)
		{
			letters[j] = 'F' - j;
			printf("%c",letters[j]);
		}
		printf("\n");
	}
	
	return 0; 
}
