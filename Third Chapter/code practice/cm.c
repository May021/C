#include <stdio.h>
int main(void)
{
	float height;
	float cm;
	
	printf("输入身高(英寸)：");
	scanf("%f", &height); 
	cm = height * 2.54;
	printf("以厘米为单位显示身高：%f",cm);
	
	return 0; 
}
