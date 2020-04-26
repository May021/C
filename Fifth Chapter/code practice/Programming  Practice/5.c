//假设第1天赚$1、第2天赚$2、第3天赚$3，以此类推
//根据用户输入天数进行计算一共赚多少钱 
#include <stdio.h>
int main(void)						
{
	int day, money, upper_limit;					
	
	day = 0;						
	money = 0;	
	printf("输入天数：");
	scanf("%d", &upper_limit);
						
	while(day++ < upper_limit)				
		money = money + day;
	printf("money = %d\n", money);	
	
	return 0;					
 } 
