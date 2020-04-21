#include <stdio.h>
#include <string.h>
int main(void){
	char first_name[20], last_name[20];
	int first_count, last_count;
	
    printf("先输入名，后输入姓:\n");
	scanf("%s %s",first_name,last_name);
	first_count = strlen(first_name);
	last_count = strlen(last_name);
	printf("打印用户输入的名和姓:%s %s\n",first_name,last_name);
	printf("分别打印名和姓的字母数:%d %d\n",first_count,last_count); 
    
	return 0;
}
