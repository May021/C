//编写一个程序，显示求模运算的结果。
//把用户输入的第1个整数作为求模运算符的第2个运算对象，该数在运算过程中保持不变。
//用户后面输入的数是第1个运算对象。当用户输入一个非正值时，程序结束。
#include <stdio.h>
int main(void)
{
	int first, last, result;
	
	printf("This　program　computes　moduli.\n");
	printf("Enter　an　integer　to　serve　as　the　second　operand: ");
	scanf("%d", &first);
	printf("Now　enter　the　first　operand: ");
	scanf("%d", &last);
	while(last > 0)
	{
		result = last % first;
		printf("%d %% %d is %d\n", last, first, result);
		printf("Enter　next　number　for　first　operand　(<=　0　to　quit): ");
		scanf("%d", &last);
	}
	printf("Done\n"); 
	
	return 0;
}
