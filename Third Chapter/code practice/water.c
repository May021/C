#include <stdio.h>
int main(void)
{
	float quarts;
	float water_member;

		
	printf("����ˮ�Ŀ�����: ");
	scanf("%f", &quarts);
	water_member = quarts * 950 / 3.0E-23;
	printf("ˮ���ӵ�����: %e", water_member);
	
	return 0;
}
