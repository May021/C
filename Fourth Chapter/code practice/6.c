#include <stdio.h>
#include <string.h>
int main(void){
	char first_name[20], last_name[20];
	int first_count, last_count;
	
    printf("������������������:\n");
	scanf("%s %s",first_name,last_name);
	first_count = strlen(first_name);
	last_count = strlen(last_name);
	printf("��ӡ�û������������:%s %s\n",first_name,last_name);
	printf("�ֱ��ӡ�����յ���ĸ��:%d %d\n",first_count,last_count); 
    
	return 0;
}
