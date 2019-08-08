#include<iostream>    //c++的预处理 
#include<cstdio>      //C++的预处理 
using namespace std;  //暂时不知道有什么用 
int main()            //下面这些和C语言一样 
{
	printf("Hello, world!\n");
	
	int a;
	scanf("%d", &a);
	printf("I have %d dollars.\n", a);
	
	char b, c, d;
	scanf("%c%c%c", &b, &c, &d);   //%c表示读入一个字符，不会跳过空格
	printf("%c%c%c", b, c, d);
	return 0;
}
