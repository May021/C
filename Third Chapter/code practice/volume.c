#include <stdio.h>
int main(void)
{
	float cups, pint, ounce, soup_ladle, sppon;

	printf("���뱭��: ");
	scanf("%f", &cups);
	pint = cups / 2;
	printf("Ʒ�ѣ�%f\n", pint);
	ounce = cups * 8;
	printf("��˾��%f\n", ounce); 
	soup_ladle = cups * 8 * 2;
	printf("���ף�%f\n", soup_ladle);
	sppon = cups * 8 * 2 * 3; 
	printf("���ף�%f\n", sppon);
	
	return 0; 
}
