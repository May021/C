//1.0 + 1.0/2.0 + 1.0/3.0 + 1.0/4.0 + ...
//1.0 - 1.0/2.0 + 1.0/3.0 - 1.0/4.0 + ...
//�����������������е��ܺͣ�ֱ������ĳ��������ʾ��������-1 ��˵�-1��ż����-1��˵�1��
//���û�����������ָ���Ĵ��������û�����0��ֵʱ�������롣
//�鿴����100�1000�10000�����ܺͣ��Ƿ���ÿ�����ж�������ĳֵ��
#include <stdio.h>
float formula1(int times);
float formula2(int times);  
int main(void)
{
	int times;
	
	printf("�����������");
	while(scanf("%d",&times)==1 && times>0){
		printf("%f %f\n",formula1(times),formula2(times));
		printf("�����������");
	}
	
	return 0;	
}

float formula1(int times)
{
	int i;
	float sum = 0.0;
	
	for(i=1;i<=times;i++)
	{
		sum += 1.0/i;
	} 
	
	return sum; 
} 

float formula2(int times)
{
	int i,j=-1;
	float sum = 0.0;
	
	for(i=1;i<=times;i++)
	{
		j *= -1;
		sum += (1.0/i)*j;	
	}
	
	return sum;
}
	
