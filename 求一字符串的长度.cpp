//求一字符串的长度
 
#include<stdio.h>
 int length(char *p);
int main()
{
	int len;
	char str[50];
	
	printf ("input string:\n");
	gets(str);
	
	len = length(str);
	
	printf ("Length of String: %d\n", len);
	return 0;
 } 
 int length(char *p)
 {
 	int n = 0;
 	while (*p != '\0') {
 		n++;
 		p++;
	 }
	 return n;
 }
