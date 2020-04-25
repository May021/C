/* convert.c -- 自动类型转换 */
#include <stdio.h>
int main(void)
{
	char ch;
	int i;
	float f1;
	
	f1 = i = ch = 'C';									/* 第9行 */
	printf("ch = %c, i = %d, f1 = %2.2f\n", ch, i, f1); /* 第10行 */
	ch = ch + 1;										/* 第11行 */
	i = f1 + 2 * ch;									/* 第12行 */
	f1 = 2.0 * ch + i;									/* 第13行 */
	printf("ch = %c, i = %d, f1 = %2.2f\n", ch, i, f1);	/* 第14行 */
	ch = 1107;    										/* 第15行 */
	printf("Now ch = %c\n", ch);						/* 第16行 */
	ch = 80.89;                                         /* 第17行 */
	printf("Now ch = %c\n", ch); 						/* 第18行 */

	return 0; 
 } 
 
