//Ҫ���û���������������������ӡ����֮����������˻��Ľ����
//���û����������֮ǰ������Ӧѭ�������û������ÿ��ֵ��
#include <stdio.h>
int main(void)
{
	float a, b, result;
	
	printf("����������������");
	while(scanf("%f %f",&a,&b) == 2) {
		result = (a-b)/(a*b);
		printf("����֮����������˻��Ľ����%f\n",result);
		printf("������һ�Ը�������"); 
	}
	
	return 0;
}
