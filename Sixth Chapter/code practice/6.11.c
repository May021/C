//��дһ�������������ж���8��������Ȼ�󰴵����ӡ��8��������
#include <stdio.h>
int main(void)
{
	int group[8], i;
	
	printf("������˸�������");
	for(i=0;i<8;i++)
	{
		scanf("%d",&group[i]);
	} 
	printf("�����ӡ��"); 
	for(i=7;i>=0;i--)
	{
		printf("%d ",group[i]); 
	}
	printf("\n");
	
	return 0;
}
