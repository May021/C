// 编写一个程序读取输入，读到#字符停止，然后报告读取的空格数、换行符数和所有其他字符的数量。
#include <stdio.h>
int main(void)
{
	int space, line_break, character;
	char ch;
	
	if((ch=getchar()) != '#')
	{
		switch (ch)
		{
			case '\n': 
				line_break++;
				break;
			case ' ':
				space++;
				break;
			default:
				character++;	
		}	
	}
	else{
		printf("读取的空格数:%d、换行符数:%d和所有其他字符数:%d", space, line_break, character);
	}
	
	return 0;
}
