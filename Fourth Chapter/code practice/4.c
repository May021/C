//��ʾ�û�������ߣ���λ��Ӣ�磩������
//��Dabney, you are 6.208 feet tall�ĸ�ʽ��ʾ�û����������Ϣ
//ʹ��float���ͣ�����/��Ϊ���š�
//������Ҫ���û�������Ϊ��λ�������,������Ϊ��λ��ʾ����
#include <stdio.h>
int main(void)
{
	float height;
	char name[20]; 
	printf("������ߣ���λ��Ӣ�磩��������");
	scanf("%f %s",&height,name);
	printf("%s, you are %.3f feet tall\n",name,height);
	
	float cmheight;
	char cmname[20];
	
	printf("������ߣ���λ�����ף���������");
	scanf("%f %s",&cmheight,cmname);
	printf("%s, you are %.3f metre tall\n",cmname,cmheight/100);
	
	return 0; 
}
