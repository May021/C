/* convert.c -- �Զ�����ת�� */
#include <stdio.h>
int main(void)
{
	char ch;
	int i;
	float f1;
	
	f1 = i = ch = 'C';									/* ��9�� */
	printf("ch = %c, i = %d, f1 = %2.2f\n", ch, i, f1); /* ��10�� */
	ch = ch + 1;										/* ��11�� */
	i = f1 + 2 * ch;									/* ��12�� */
	f1 = 2.0 * ch + i;									/* ��13�� */
	printf("ch = %c, i = %d, f1 = %2.2f\n", ch, i, f1);	/* ��14�� */
	ch = 1107;    										/* ��15�� */
	printf("Now ch = %c\n", ch);						/* ��16�� */
	ch = 80.89;                                         /* ��17�� */
	printf("Now ch = %c\n", ch); 						/* ��18�� */

	return 0; 
 } 
 