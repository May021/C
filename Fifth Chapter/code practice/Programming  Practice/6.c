//计算整数的平方和（可以认为第1天赚$1、第2天赚$4、第3天赚$9，以此类推）。
//C没有平方函数，但是可以用n * n来表示n的平方。
#include <stdio.h>
int main(void)
{
	int day, money, upper_limit;					
	
	day = 0;						
	money = 0;	
	printf("输入天数：");
	scanf("%d", &upper_limit);
						
	while(day++ < upper_limit)				
		money = money + day * day;
	printf("money = %d\n", money);	
	
	return 0;
}
