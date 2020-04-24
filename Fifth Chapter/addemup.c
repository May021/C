/* addemup.c -- 几种常见的语句 */
#include <stdio.h>
int main(void)						/* 计算前20个整数的和 */
{
	int count, sum;					/* 声明 */
	
	count = 0;						/* 表达式语句 */
	sum = 0;						/* 表达式语句 */
	while(count++ < 20)				/* 迭代语句 */
		sum = sum + count;
	printf("sum = %d\n", sum);		/* 表达式语句 */
	
	return 0;						/* 跳转语句 */
 } 
 
//在C语言中，赋值和函数调用都是表达式。没有所谓的"赋值语句"和"函数调用语句"，这些语句实际上都是表达式语句。 
//根据 C标准，声明不是语句。  
