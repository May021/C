//提示用户输入一个double类型的数，并打印该数的立方值。
//自己设计一个函数计算并打印立方值。
//main()函数要把用户输入的值传递给该函数。
#include <stdio.h>
void cube(double num);
int main(void)
{
	double number;
	
	printf("输入一个double类型的数：");
	scanf("%lf", &number); 
	cube(number);

	return 0;
}

void cube(double num)
{
	double result = num * num * num;
	printf("%lf 的立方值是 %lf\n", num, result); 
}
