#include <stdio.h>
int main(void)
{
	int a = 2147483647;
	float b = 3.4E38 * 100.0f;
	float c = 0.1234E-10/10E100;
	
	printf("�������磺%d\n", a+1);
	printf("���������磺%e\n", b);
	printf("���������磺%e\n", c);
	
	return 0; 
}
