//��ӡһ�����ÿһ�д�ӡһ��������������ƽ����������������
//Ҫ���û�������������ޡ�ʹ��һ��forѭ����
#include <stdio.h>
int main(void)
{
	int num, square , cube;
	int upper, lower;
	
	printf("������������޺����ޣ�");
	scanf("%d %d", &lower, &upper);
	printf("num		square		cube\n");
	for( num=lower;num<=upper ;num++)
	{
		square = num*num;
		cube = num*num*num; 
		printf("%d		%d		%d\n", num, square, cube);
	}
		
	return 0;	
}
