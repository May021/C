//��ʾ�û�����һ��������Ȼ���ӡ�Ӹ������ȸ�����10���������������磬�û�����5�����ӡ5��15����������������5��15����
//Ҫ���ӡ�ĸ�ֵ֮����һ���ո��Ʊ�����з��ֿ���
#include <stdio.h>
int main(void)
{
	int num,  upper_limit;
	printf("����һ��������");
	scanf("%d",&num);
	upper_limit = num+10;
	
	while(num <= upper_limit)
	{
		printf("%d ",num);
		num++;
    } 
    printf("\n");
    
    return 0;
}
