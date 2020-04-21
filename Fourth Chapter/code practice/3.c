//读取一个浮点数，首先以小数点记数法打印，然后以指数记数法打印。
#include <stdio.h>
int main(void)
{
	float count;
	printf("输入一个浮点数："); 
	scanf("%f", &count);
	printf("The input is %.1f or %.1e.\n", count, count);
	printf("The input is %+.3f or %.3E.\n", count, count);
	return 0;
}
