//编写一个程序，在数组中读入8个整数，然后按倒序打印这8个整数。
#include <stdio.h>
int main(void)
{
	int group[8], i;
	
	printf("请输入八个整数：");
	for(i=0;i<8;i++)
	{
		scanf("%d",&group[i]);
	} 
	printf("倒序打印："); 
	for(i=7;i>=0;i--)
	{
		printf("%d ",group[i]); 
	}
	printf("\n");
	
	return 0;
}
