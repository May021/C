//Ҫ���û�����һ�������¶ȡ�����Ӧ��ȡdouble���͵�ֵ��Ϊ�¶�ֵ�����Ѹ�ֵ��Ϊ�������ݸ�һ���û��Զ���ĺ���Temperatures()��
//�ú������������¶ȺͿ����¶ȣ�����С���������λ���ֵľ�����ʾ3���¶ȡ�Ҫʹ�ò�ͬ���±�����ʾ��3���¶�ֵ��
//�����¶�ת�����¶ȵĹ�ʽ�������¶� = 5.0 / 9.0 * (�����¶� - 32.0);
//�����±곣���ڿ�ѧ�о���0��ʾ�����㣬������͵��¶ȡ������¶�ת�����¶ȵĹ�ʽ�������¶� = �����¶� + 273.16��
//Temperatures()��������const�����¶�ת����ʹ�õı�����
//��main()������ʹ��һ��ѭ�����û��ظ������¶ȣ����û����� q ������������ʱ��ѭ��������
//scanf()�������ض�ȡ���ݵ����������������ȡ�����򷵻�1�������ȡq�򲻷���1��
//����ʹ��==�������scanf()�ķ���ֵ��1���Ƚϣ�������ֵ�Ƿ���ȡ� 
#include <stdio.h>
void Temperatures(double tem);
int main(void)
{
	double Fahrenheit;
	printf("����һ�������¶�(������ʱ���������)��");
	 
	while( scanf("%lf",&Fahrenheit) == 1)
	{
		Temperatures(Fahrenheit);
		printf("����һ�������¶�(������ʱ���������)��");
	}
	printf("End\n");
	
	return 0; 
}
void Temperatures(double tem)
{
	double Centigrade, Kelvin;
	const double h_convert_c1 = 5.0 / 9.0, h_convert_c2 = 32.0, c_convert_k = 273.16;
	Centigrade = h_convert_c1 * (tem - h_convert_c2);
	Kelvin = Centigrade + c_convert_k;
	printf("�����¶�:%.2lf 		�����¶�:%.2lf 		�����¶�:%.2lf\n", tem, Centigrade, Kelvin);
}
