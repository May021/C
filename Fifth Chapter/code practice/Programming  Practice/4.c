//��ʾ�û�����һ����ߣ���λ�����ף������ֱ������׺�Ӣ��Ϊ��λ��ʾ��ֵ��������С�����֡�
//����Ӧ�������û��ظ�������ߣ�ֱ���û�����һ������ֵ��
#include <stdio.h>
#define CONVERT 0.3937 
int main(void)
{
	float height, inch;
	int feet;
	
	printf("Enter a height in centimeters:");
	scanf("%f", &height);
	
	while(height > 0)
	{
		feet = height / 31;
		inch = CONVERT * height - feet * 12;
		printf("%.1f cm = %d feet, %.1f inches\n", height, feet, inch);
		printf("Enter a height in centimeters (<=0 to quit):");
		scanf("%f", &height); 
	}
	printf("bye\n");
	
	return 0; 
}
