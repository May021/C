//编写一个程序，创建一个包含8个元素的int类型数组，分别把数组元素设置为2的前8次幂。
//使用for循环设置数组元素的值，使用do while循环显示数组元素的值。
#include <stdio.h>
int main(void)
{
	int num[8];
	num[0]=1;
	int i;
	
	for(i=1; i<8; i++)
	{
		num[i]=2*num[i-1];
	}
	i=0;
	do{
		
		printf("%d ",num[i]);
		i++;
	}while(i<8);
	
	return 0;
}
