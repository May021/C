//打印一个表格，每一行打印一个整数、该数的平方、该数的立方。
//要求用户输入表格的上下限。使用一个for循环。
#include <stdio.h>
int main(void)
{
	int num, square , cube;
	int upper, lower;
	
	printf("请输入表格的上限和下限：");
	scanf("%d %d", &lower, &upper);
	printf("num		square		cube\n");
	for( num=lower;num<=upper ;num++)
	{
		square = num*num;
		cube = num*num*num; 
		printf("%d		%d		%d\n", num, square, cube);
	}
		
	return 0;	
}
