//����һ�����֣��ҳ�������Ĵ�д��ĸ��Сд��ĸ���ո����ֵĸ����Լ������ַ��Ķ���

#include<stdio.h>
int main()
{
	int bchar = 0, schar = 0, space = 0, number = 0, other = 0, i = 0;
	char *p, c[36];
	
	printf ("input string:\n");
	while ((c[i] = getchar()) != '\n')   //����ַ���ȡ��ʹ�䵥����Ϊ����Ԫ�� 
		i++;
		
	p = &c[0];   //ָ��ָ���ַ����� c ���׸�Ԫ�صĵ�ַ 
	
	while (*p != '\n') {
		if (('A' <= *p) && (*p <= 'Z'))
		bchar++;
		else if (('a' <= *p) && (*p <= 'z'))
		schar++;
		else if (*p == ' ')
		space++;
		else if (('0' <= *p) && (*p <= '9'))
		number++;
		else 
		other++;
		p++;       // ָ���һ��ָ����һ������Ԫ�� 
	}
	printf ("��д��ĸ��%d\nСд��ĸ��%d\n�ո�%d\n", bchar, schar, space);
	printf ("���֣�%d\n������%d\n", number, other);
	return 0; 
 } 
