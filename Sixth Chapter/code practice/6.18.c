#include <stdio.h>
int main(void)
{
	int friends = 5, n;
	
	for(n = 1; friends < 150; n++)
	{
		friends = (friends - n)*2;
		printf("��%d�ܣ�Rabnud��%d�����ѡ�\n",n,friends);
	}
	
	return 0;
}
