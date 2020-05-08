//1.0 + 1.0/2.0 + 1.0/3.0 + 1.0/4.0 + ...
//1.0 - 1.0/2.0 + 1.0/3.0 - 1.0/4.0 + ...
//计算这两个无限序列的总和，直到到达某次数。提示：奇数个-1 相乘得-1，偶数个-1相乘得1。
//让用户交互地输入指定的次数，当用户输入0或负值时结束输入。
//查看运行100项、1000项、10000项后的总和，是否发现每个序列都收敛于某值？
#include <stdio.h>
float formula1(int times);
float formula2(int times);  
int main(void)
{
	int times;
	
	printf("请输入次数：");
	while(scanf("%d",&times)==1 && times>0){
		printf("%f %f\n",formula1(times),formula2(times));
		printf("请输入次数：");
	}
	
	return 0;	
}

float formula1(int times)
{
	int i;
	float sum = 0.0;
	
	for(i=1;i<=times;i++)
	{
		sum += 1.0/i;
	} 
	
	return sum; 
} 

float formula2(int times)
{
	int i,j=-1;
	float sum = 0.0;
	
	for(i=1;i<=times;i++)
	{
		j *= -1;
		sum += (1.0/i)*j;	
	}
	
	return sum;
}
	
