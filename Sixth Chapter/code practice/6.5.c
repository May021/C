#include <stdio.h>
int main(void)
{
	char letter;
	int i , j ,limit;
	
	printf("�����д��ĸ��");
	scanf("%c",&letter);
	limit = letter - 'A' + 1; 		//��������� 
	for(i=0; i<limit ;i++)
	{
		for(j=0; j<limit-i-1 ;j++)  //����ո�
		{
			printf(" ");
		} 
		for(j=0; j<=i; j++)			//�����ӡ��ĸ 
		{
			printf("%c",'A'+j);
		}
		for(j=i-1; j>=0; j--)		//�����ӡ��ĸ
		{
			printf("%c",'A'+j);
		}
		printf("\n");
	} 
	
	return 0;
}
