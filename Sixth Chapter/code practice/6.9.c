//�޸���ϰ8��ʹ��һ���������ؼ���Ľ����
#include <stdio.h>
float result(float a,float b);
int main(void)
{
	float a, b;
	
	printf("����������������");
	while(scanf("%f %f",&a,&b) == 2) {
		printf("����֮����������˻��Ľ����%f\n",result(a,b));
		printf("������һ�Ը�������"); 
	}
	
	return 0;
}
float result(float a,float b)
{
	float res;
	res = (a-b)/(a*b);
	
	return res; 
}
