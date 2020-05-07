//Chuckie Lucky赢得了100万美元（税后），他把奖金存入年利率8%的账户。
//在每年的最后一天， Chuckie取出10万美元。编写一个程序，计算多少年后Chuckie会取完账户的钱？
#include <stdio.h>
#define RATE 0.08
int main(void)
{
	float sum=1000000;
	int i;
	
	for(i=0; sum>=0 ; i++)
	{
		sum = sum * (1 + RATE) - 100000;
	}
	printf("%d年后Chuckie会取完账户的钱\n",i);
	
	return 0;
 } 
