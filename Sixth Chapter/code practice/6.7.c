//把一个单词读入一个字符数组中，然后倒序打印这个单词。
//提示：strlen()函数可用于计算数组最后一个字符的下标。
#include <stdio.h>
#include <string.h>
int main(void)
{
	char letters[20];
	int n, i;
	
	scanf("%s",letters);
	n = strlen(letters);
	for(i=n; i>=0; i--)
	{
		printf("%c",letters[i-1]);
	}
	printf("\n");
	
	return 0;
}
