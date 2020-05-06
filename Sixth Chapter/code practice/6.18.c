#include <stdio.h>
int main(void)
{
	int friends = 5, n;
	
	for(n = 1; friends < 150; n++)
	{
		friends = (friends - n)*2;
		printf("第%d周，Rabnud有%d个朋友。\n",n,friends);
	}
	
	return 0;
}
