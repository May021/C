//��ʾ�û�����������Ȼ����ת�������������������磬�û�����18����ת����2��4�졣
//��18 days are 2 weeks, 4 days.�ĸ�ʽ��ʾ�����
//ͨ��whileѭ�����û��ظ��������������û�����һ������ֵʱ����0��-20����ѭ��������  
#include <stdio.h>
#define Days_Per_Week 7
int main(void)
{
	int days, Day, Week;
	
	printf("����������");
	scanf("%d", &days); 
	while(days > 0)
	{
		Week = days / Days_Per_Week;
		Day = days % Days_Per_Week;
		printf("%d days are %d weeks, %d days.\n", days, Week, Day);
		printf("��������������ֵ�˳����򣩣�");
		scanf("%d", &days); 
	}
	printf("End\n");
	
	return 0; 
}
