//�����1��׬$1����2��׬$2����3��׬$3���Դ�����
//�����û������������м���һ��׬����Ǯ 
#include <stdio.h>
int main(void)						
{
	int day, money, upper_limit;					
	
	day = 0;						
	money = 0;	
	printf("����������");
	scanf("%d", &upper_limit);
						
	while(day++ < upper_limit)				
		money = money + day;
	printf("money = %d\n", money);	
	
	return 0;					
 } 
