//三个字符串排序 

#include<stdio.h>
#include<string.h>      //引用字符串函数库 
void swap(char *p1, char *p2);  //swap函数声明 
int main()
{
	char str1[26], str2[36], str3[18];    //定义三个字符串数组 
	                                       
	printf ("input three line:\n");   //如果使用二维数组会不会好些呢？ 
	gets(str1);                       //输入字符串数组 
	gets(str2);
	gets(str3);
	
	if (strcmp(str1, str2) > 0)     //这里有三个 if 这些内容相似，好像可以用函数优化 
	swap(str1, str2);
	if (strcmp(str1, str3) > 0)
	swap(str1, str3);
	if (strcmp(str2, str3) > 0)
	swap(str2, str3);
	
	printf ("\nNow,the order is:\n");
	printf ("%s\n%s\n%s\n", str1, str2, str3);
	return 0;
 } 
 void swap(char *p1, char *p2)
 {
 	char p[38];
 	
 	strcpy(p, p1);
 	strcpy(p1, p2);
 	strcpy(p2, p);
 }
