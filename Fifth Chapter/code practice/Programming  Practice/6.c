//����������ƽ���ͣ�������Ϊ��1��׬$1����2��׬$4����3��׬$9���Դ����ƣ���
//Cû��ƽ�����������ǿ�����n * n����ʾn��ƽ����
#include <stdio.h>
int main(void)
{
	int day, money, upper_limit;					
	
	day = 0;						
	money = 0;	
	printf("����������");
	scanf("%d", &upper_limit);
						
	while(day++ < upper_limit)				
		money = money + day * day;
	printf("money = %d\n", money);	
	
	return 0;
}
