//��дһ�����򣬶�ȡһ�����룬Ȼ�����������ݵ����ӡ������
//���԰����봢����char���͵������У�����ÿ���ַ�������255��
//����%cת��˵����scanf()����һ��ֻ�ܴ������ж�ȡһ���ַ����������û�����Enter��ʱscanf()����������һ�������ַ�(\n)��
#include <stdio.h>
int main(void)
{
	char input[255];
	int i=-1;
	
	printf("�����룺");
	do
    {
        i++;
        scanf("%c", &input[i]);
    }while(input[i] != '\n');
    for(; i>=0 ; i--)
    {
 		printf("%c",input[i]);	
    }	

	return 0;
}

