//��ʾ�û�����һ��double���͵���������ӡ����������ֵ��
//�Լ����һ���������㲢��ӡ����ֵ��
//main()����Ҫ���û������ֵ���ݸ��ú�����
#include <stdio.h>
void cube(double num);
int main(void)
{
	double number;
	
	printf("����һ��double���͵�����");
	scanf("%lf", &number); 
	cube(number);

	return 0;
}

void cube(double num)
{
	double result = num * num * num;
	printf("%lf ������ֵ�� %lf\n", num, result); 
}
