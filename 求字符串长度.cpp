//求字符串的长度
#include<stdio.h>
#include<string.h>
int count(char a);
int main()
{
	char str[10];
	gets(str);
	printf ("%d", count(str[10]));

	return 0;  
}

int count(char a)
{
	int ret = 0;
	int i;
//	for ( i = 0; getchar(a) != '\0'; i++)
    while((i = getchar()) != '\0')
	ret++;
	
	return ret;
}
 
