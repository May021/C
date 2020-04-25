//提示用户输入一个身高（单位：厘米），并分别以厘米和英寸为单位显示该值，允许有小数部分。
//程序应该能让用户重复输入身高，直到用户输入一个非正值。
#include <stdio.h>
#define CONVERT 0.3937 
int main(void)
{
	float height, inch;
	int feet;
	
	printf("Enter a height in centimeters:");
	scanf("%f", &height);
	
	while(height > 0)
	{
		feet = height / 31;
		inch = CONVERT * height - feet * 12;
		printf("%.1f cm = %d feet, %.1f inches\n", height, feet, inch);
		printf("Enter a height in centimeters (<=0 to quit):");
		scanf("%f", &height); 
	}
	printf("bye\n");
	
	return 0; 
}
