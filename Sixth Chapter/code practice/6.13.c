//��дһ�����򣬴���һ������8��Ԫ�ص�int�������飬�ֱ������Ԫ������Ϊ2��ǰ8���ݡ�
//ʹ��forѭ����������Ԫ�ص�ֵ��ʹ��do whileѭ����ʾ����Ԫ�ص�ֵ��
#include <stdio.h>
int main(void)
{
	int num[8];
	num[0]=1;
	int i;
	
	for(i=1; i<8; i++)
	{
		num[i]=2*num[i-1];
	}
	i=0;
	do{
		
		printf("%d ",num[i]);
		i++;
	}while(i<8);
	
	return 0;
}
