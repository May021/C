//��ʾ�û���������λÿ�루Mb/s��Ϊ��λ�������ٶȺ������ֽڣ�MB��Ϊ��λ���ļ���С��
//������Ӧ�����ļ�������ʱ�䡣ע�⣬����1�ֽڵ���8λ��
//ʹ��float���ͣ�����/��Ϊ���š�
//����Ҫ������ĸ�ʽ��ӡ 3��������ֵ�������ٶȡ��ļ���С������ʱ�䣩����ʾС���������λ���֣�
//At 18.12 megabits per second, a file of 2.20 megabytes 
//downloads in 0.97 seconds.
#include <stdio.h>
int main(void)
{
	float speed, size, time;
	
	printf("���������ٶȣ�Mb/s�����ļ���С��MB��:");
	scanf("%f %f",&speed,&size);
	time = size/(speed/8);
	printf("At %.2f megabits per second, a file of %.2f megabytes\n",speed,size);
	printf("downloads in %.2f seconds.\n",time);
	
	return 0;
}
