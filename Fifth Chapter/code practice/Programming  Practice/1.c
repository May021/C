//用分钟表示的时间转换成用小时和分钟表示的时间。
//使用#define或const创建一个表示60的符号常量或const变量。
//通过while循环让用户重复输入值，直到用户输入小于或等于0的值才停止循环。
#include <stdio.h>
#define Min_Per_Hour 60
int main(void)
{
	int time, hour, min; 
	
	printf("请输入您想表示的时间的分钟数：");
	scanf("%d",&time); 
	while(time >0)
	{
		min = time % Min_Per_Hour;
		hour = time / Min_Per_Hour;
		printf("%d分钟是 %d小时 %d分钟\n", time, hour, min);
		printf("请输入下一个您想表示的时间的分钟数（0退出）：");
		scanf("%d",&time); 
	}
	printf("End\n");
	
	return 0;
 } 
