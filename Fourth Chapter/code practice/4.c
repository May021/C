//提示用户输入身高（单位：英寸）和姓名
//以Dabney, you are 6.208 feet tall的格式显示用户刚输入的信息
//使用float类型，并用/作为除号。
//还可以要求用户以厘米为单位输入身高,并以米为单位显示出来
#include <stdio.h>
int main(void)
{
	float height;
	char name[20]; 
	printf("输入身高（单位：英寸）和姓名：");
	scanf("%f %s",&height,name);
	printf("%s, you are %.3f feet tall\n",name,height);
	
	float cmheight;
	char cmname[20];
	
	printf("输入身高（单位：厘米）和姓名：");
	scanf("%f %s",&cmheight,cmname);
	printf("%s, you are %.3f metre tall\n",cmname,cmheight/100);
	
	return 0; 
}
