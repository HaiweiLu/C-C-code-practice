//�����ַ������� 

#include<stdio.h>
#include<string.h>      //�����ַ��������� 
void swap(char *p1, char *p2);  //swap�������� 
int main()
{
	char str1[26], str2[36], str3[18];    //���������ַ������� 
	                                       
	printf ("input three line:\n");   //���ʹ�ö�ά����᲻���Щ�أ� 
	gets(str1);                       //�����ַ������� 
	gets(str2);
	gets(str3);
	
	if (strcmp(str1, str2) > 0)     //���������� if ��Щ�������ƣ���������ú����Ż� 
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
