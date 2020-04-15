#include <stdio.h>
int main(void)
{
	float quarts;
	float water_member;

		
	printf("输入水的夸脱数: ");
	scanf("%f", &quarts);
	water_member = quarts * 950 / 3.0E-23;
	printf("水分子的数量: %e", water_member);
	
	return 0;
}
