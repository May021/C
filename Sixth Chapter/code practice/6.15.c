//编写一个程序，读取一行输入，然后把输入的内容倒序打印出来。
//可以把输入储存在char类型的数组中，假设每行字符不超过255。
//根据%c转换说明，scanf()函数一次只能从输入中读取一个字符，而且在用户按下Enter键时scanf()函数会生成一个换行字符(\n)。
#include <stdio.h>
int main(void)
{
	char input[255];
	int i=-1;
	
	printf("请输入：");
	do
    {
        i++;
        scanf("%c", &input[i]);
    }while(input[i] != '\n');
    for(; i>=0 ; i--)
    {
 		printf("%c",input[i]);	
    }	

	return 0;
}

