//�÷��ӱ�ʾ��ʱ��ת������Сʱ�ͷ��ӱ�ʾ��ʱ�䡣
//ʹ��#define��const����һ����ʾ60�ķ��ų�����const������
//ͨ��whileѭ�����û��ظ�����ֵ��ֱ���û�����С�ڻ����0��ֵ��ֹͣѭ����
#include <stdio.h>
#define Min_Per_Hour 60
int main(void)
{
	int time, hour, min; 
	
	printf("�����������ʾ��ʱ��ķ�������");
	scanf("%d",&time); 
	while(time >0)
	{
		min = time % Min_Per_Hour;
		hour = time / Min_Per_Hour;
		printf("%d������ %dСʱ %d����\n", time, hour, min);
		printf("��������һ�������ʾ��ʱ��ķ�������0�˳�����");
		scanf("%d",&time); 
	}
	printf("End\n");
	
	return 0;
 } 
