//��ʾ�û����������գ���ִ��һ�²�����
#include<stdio.h>
#include<string.h>  //����strlen()������ͷ�ļ�
int main(void)
{
	char name[20];
	int nameLength; 
	
	printf("���������գ�");
	scanf("%s",name);
	nameLength = strlen(name);
	
	printf("\"%s\"\n",name);		//a. ��ӡ���֣�����˫����
	printf("\"%20s\"\n",name);		//b. �ڿ��Ϊ20���ֶ��Ҷ˴�ӡ�����գ�����˫����
	printf("\"%-20s\"\n",name);		//c. �ڿ��Ϊ20���ֶ���˴�ӡ�����գ�����˫����	
	printf("\"%*s\"\n",nameLength+3,name);	//d. �ڱ�������ȿ�3���ֶ��д�ӡ���֡�
	
	return 0;
 } 

