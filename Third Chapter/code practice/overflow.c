#include <stdio.h>
int main(void)
{
	int a = 2147483647;
	float b = 3.4E38 * 100.0f;
	float c = 0.1234E-10/10E100;
	
	printf("整数上溢：%d\n", a+1);
	printf("浮点数上溢：%e\n", b);
	printf("浮点数下溢：%e\n", c);
	
	return 0; 
}
