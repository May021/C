//Chuckie LuckyӮ����100����Ԫ��˰�󣩣����ѽ������������8%���˻���
//��ÿ������һ�죬 Chuckieȡ��10����Ԫ����дһ�����򣬼���������Chuckie��ȡ���˻���Ǯ��
#include <stdio.h>
#define RATE 0.08
int main(void)
{
	float sum=1000000;
	int i;
	
	for(i=0; sum>=0 ; i++)
	{
		sum = sum * (1 + RATE) - 100000;
	}
	printf("%d���Chuckie��ȡ���˻���Ǯ\n",i);
	
	return 0;
 } 
