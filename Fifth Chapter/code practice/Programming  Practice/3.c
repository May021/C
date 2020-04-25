//提示用户输入天数，然后将其转换成周数和天数。例如，用户输入18，则转换成2周4天。
//以18 days are 2 weeks, 4 days.的格式显示结果。
//通过while循环让用户重复输入天数，当用户输入一个非正值时（如0或-20），循环结束。  
#include <stdio.h>
#define Days_Per_Week 7
int main(void)
{
	int days, Day, Week;
	
	printf("输入天数：");
	scanf("%d", &days); 
	while(days > 0)
	{
		Week = days / Days_Per_Week;
		Day = days % Days_Per_Week;
		printf("%d days are %d weeks, %d days.\n", days, Week, Day);
		printf("输入天数（非正值退出程序）：");
		scanf("%d", &days); 
	}
	printf("End\n");
	
	return 0; 
}
