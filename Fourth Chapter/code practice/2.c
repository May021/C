//提示用户输入名和姓，并执行一下操作：
#include<stdio.h>
#include<string.h>  //包含strlen()函数的头文件
int main(void)
{
	char name[20];
	int nameLength; 
	
	printf("输入名和姓：");
	scanf("%s",name);
	nameLength = strlen(name);
	
	printf("\"%s\"\n",name);		//a. 打印名字，包括双引号
	printf("\"%20s\"\n",name);		//b. 在宽度为20的字段右端打印名和姓，包括双引号
	printf("\"%-20s\"\n",name);		//c. 在宽度为20的字段左端打印名和姓，包括双引号	
	printf("\"%*s\"\n",nameLength+3,name);	//d. 在比姓名宽度宽3的字段中打印名字。
	
	return 0;
 } 

