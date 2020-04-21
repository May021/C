//提示用户输入名和姓，然后以“名,姓”的格式打印出来
#include<stdio.h>
int main(void)
{
	char name[20];
	char surname[20];
	
	printf("输入名和姓："); 
	scanf("%s %s", name, surname);
	printf("%s,%s",name,surname);
	
	return 0;
 } 
