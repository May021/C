//要求用户输入两个浮点数，并打印两数之差除以两数乘积的结果。
//在用户输入非数字之前，程序应循环处理用户输入的每对值。
#include <stdio.h>
int main(void)
{
	float a, b, result;
	
	printf("输入两个浮点数：");
	while(scanf("%f %f",&a,&b) == 2) {
		result = (a-b)/(a*b);
		printf("两数之差除以两数乘积的结果：%f\n",result);
		printf("输入下一对浮点数："); 
	}
	
	return 0;
}
