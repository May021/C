//��һ�����ʶ���һ���ַ������У�Ȼ�����ӡ������ʡ�
//��ʾ��strlen()���������ڼ����������һ���ַ����±ꡣ
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
