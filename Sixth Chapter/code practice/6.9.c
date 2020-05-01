//修改练习8，使用一个函数返回计算的结果。
#include <stdio.h>
float result(float a,float b);
int main(void)
{
	float a, b;
	
	printf("输入两个浮点数：");
	while(scanf("%f %f",&a,&b) == 2) {
		printf("两数之差除以两数乘积的结果：%f\n",result(a,b));
		printf("输入下一对浮点数："); 
	}
	
	return 0;
}
float result(float a,float b)
{
	float res;
	res = (a-b)/(a*b);
	
	return res; 
}
