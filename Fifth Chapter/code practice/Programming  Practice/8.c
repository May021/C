//��дһ��������ʾ��ģ����Ľ����
//���û�����ĵ�1��������Ϊ��ģ������ĵ�2��������󣬸�������������б��ֲ��䡣
//�û�������������ǵ�1��������󡣵��û�����һ������ֵʱ�����������
#include <stdio.h>
int main(void)
{
	int first, last, result;
	
	printf("This��program��computes��moduli.\n");
	printf("Enter��an��integer��to��serve��as��the��second��operand: ");
	scanf("%d", &first);
	printf("Now��enter��the��first��operand: ");
	scanf("%d", &last);
	while(last > 0)
	{
		result = last % first;
		printf("%d %% %d is %d\n", last, first, result);
		printf("Enter��next��number��for��first��operand��(<=��0��to��quit): ");
		scanf("%d", &last);
	}
	printf("Done\n"); 
	
	return 0;
}
