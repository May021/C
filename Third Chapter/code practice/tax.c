#include <stdio.h>
int main(void)
{
	float  g, h;
	float  tax, rate;

	rate = 0.08;  //rate����Ӧ��ֵ
	g = 1.0e5;   //��eǰ��������һ������
	tax = rate*g;
	h = g + tax;
	printf("You owe $%f plus $%f in taxes for a total of $%f.\n", g, tax, h);

	return 0;
}