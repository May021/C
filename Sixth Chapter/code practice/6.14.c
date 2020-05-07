//编写一个程序，创建两个包含8个元素的double类型数组
//使用循环提示用户为第一个数组输入8个值。第二个数组元素的值设置为第一个数组对应元素的累积之和。
//用嵌套循环可以完成，但是利用第二个数组的第5个元素是第二个数组的第4个元素与第一个数组的第5个元素之和，只用一个循环就能完成任务，不需要使用嵌套循环
//最后，使用循环显示两个数组的内容
#include <stdio.h>
int main(void)
{
	double first[8], second[8];
	int i; 
	
	for(i=0; i<8; i++)
	{
		scanf("%lf",&first[i]);
		if(i>0)
		{
			second[i] = first[i]+second[i-1];
		}else{
			second[i] = first[i];
		}
	}
	for(i=0; i<8; i++)
	{
		printf("%.2lf ",second[i]);
	}
	
	return 0;
 } 
