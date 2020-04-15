#include <stdio.h>
int main(void)
{
	int age;
	float minutes;
	
	minutes = age * 3.156E7;
	
	printf("提示用户输入年龄：");
	scanf("%d", &age); 
	printf("该年龄对应的秒数: %f",minutes);
	
	return 0;
}
