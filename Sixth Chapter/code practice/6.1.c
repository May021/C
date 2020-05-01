//创建一个包含26个元素的数组，并在其中储存26个小写字母。然后打印数组的所有内容。
#include <stdio.h>
int main(void)
{
	char letter[26];
	int i;
	
	for(i=0 ; i<26; i++)
	{
		letter[i] = 'A' + i;
		printf("%c",letter[i]);
	}
	
	return 0;
}
