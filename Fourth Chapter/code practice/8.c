//��ʾ�û��������е���̺����ĵ���������
//Ȼ����㲢��ʾ����ÿ����������ʻ��Ӣ��������ʾС�������һλ���֡�
//ʹ��1���ش�Լ3.785����1Ӣ���ԼΪ1.609ǧ�ף��ѵ�λ��Ӣ��/���ص�ֵת��Ϊ��/100���ŷ��ͨ�õ�ȼ�����ı�ʾ����
//����ʾ�������ʾС������� 1 λ���֡�
//ע�⣬�������õķ����������ĵ�λȼ�ϵ��г̣�ֵԽ��Խ�ã�����ŷ������õ�λ�������ĵ�ȼ�ϲ���������ֵԽ��Խ�ã���
//ʹ��#define �������ų�����ʹ�� const �޶���������������ʾ����ת��ϵ����
#include <stdio.h>
#define distance_CONVERT  1.609
#define Gasoline_CONVERT  3.785
int main(void)
{
	float distance, Gasoline_quantity; 
	printf("���������е����(Ӣ��)�����ĵ�������(����):");
	scanf("%f %f",&distance,&Gasoline_quantity);
	printf("��ʾ����ÿ����������ʻ��Ӣ����:%.1f\n",distance/Gasoline_quantity);
	printf("�ѵ�λ��Ӣ��/���ص�ֵת��Ϊ��/100����:%.1f\n",(Gasoline_quantity*Gasoline_CONVERT)/(distance*distance_CONVERT)*100);
	
	return 0;
}
