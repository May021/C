// ��дһ�������ȡ���룬����#�ַ�ֹͣ��Ȼ�󱨸��ȡ�Ŀո��������з��������������ַ���������
#include <stdio.h>
int main(void)
{
	int space, line_break, character;
	char ch;
	
	if((ch=getchar()) != '#')
	{
		switch (ch)
		{
			case '\n': 
				line_break++;
				break;
			case ' ':
				space++;
				break;
			default:
				character++;	
		}	
	}
	else{
		printf("��ȡ�Ŀո���:%d�����з���:%d�����������ַ���:%d", space, line_break, character);
	}
	
	return 0;
}
