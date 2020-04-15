#include <stdio.h>
int main(void)
{
	float cups, pint, ounce, soup_ladle, sppon;

	printf("输入杯数: ");
	scanf("%f", &cups);
	pint = cups / 2;
	printf("品脱：%f\n", pint);
	ounce = cups * 8;
	printf("盎司：%f\n", ounce); 
	soup_ladle = cups * 8 * 2;
	printf("汤勺：%f\n", soup_ladle);
	sppon = cups * 8 * 2 * 3; 
	printf("茶勺：%f\n", sppon);
	
	return 0; 
}
