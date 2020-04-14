#include <stdio.h>
int main(void)
{
	float  g, h;
	float  tax, rate;

	rate = 0.08;  //rate变量应赋值
	g = 1.0e5;   //在e前面至少有一个数字
	tax = rate*g;
	h = g + tax;
	printf("You owe $%f plus $%f in taxes for a total of $%f.\n", g, tax, h);

	return 0;
}
