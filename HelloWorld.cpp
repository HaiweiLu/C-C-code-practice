#include<iostream>    //c++��Ԥ���� 
#include<cstdio>      //C++��Ԥ���� 
using namespace std;  //��ʱ��֪����ʲô�� 
int main()            //������Щ��C����һ�� 
{
	printf("Hello, world!\n");
	
	int a;
	scanf("%d", &a);
	printf("I have %d dollars.\n", a);
	
	char b, c, d;
	scanf("%c%c%c", &b, &c, &d);   //%c��ʾ����һ���ַ������������ո�
	printf("%c%c%c", b, c, d);
	return 0;
}
