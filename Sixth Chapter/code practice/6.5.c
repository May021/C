#include <stdio.h>
int main(void)
{
	char letter;
	int i , j ,limit;
	
	printf("输入大写字母：");
	scanf("%c",&letter);
	limit = letter - 'A' + 1; 		//输出的行数 
	for(i=0; i<limit ;i++)
	{
		for(j=0; j<limit-i-1 ;j++)  //处理空格
		{
			printf(" ");
		} 
		for(j=0; j<=i; j++)			//升序打印字母 
		{
			printf("%c",'A'+j);
		}
		for(j=i-1; j>=0; j--)		//降序打印字母
		{
			printf("%c",'A'+j);
		}
		printf("\n");
	} 
	
	return 0;
}
