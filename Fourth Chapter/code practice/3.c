//��ȡһ����������������С�����������ӡ��Ȼ����ָ����������ӡ��
#include <stdio.h>
int main(void)
{
	float count;
	printf("����һ����������"); 
	scanf("%f", &count);
	printf("The input is %.1f or %.1e.\n", count, count);
	printf("The input is %+.3f or %.3E.\n", count, count);
	return 0;
}
