//����һ������26��Ԫ�ص����飬�������д���26��Сд��ĸ��Ȼ���ӡ������������ݡ�
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
