//用指向指针的指针的方法对 5 个字符串排序输出

#include<stdio.h>
#include<string.h>
#define LENMAX 28
#define N 5
void sort(char **p);
int mian()
{
	int i;
	char **p, *pstr[N], str[N][LENMAX];
	
	for (i = 0; i < N; i++) {
		pstr[i] = str[i];
	}
	printf ("input 5 strings:\n");
	for (i = 0; i < N; i++) {
		scanf("%s", pstr[i]);
	}
	p = pstr;
	sort(p);
	printf ("\nstrings sorted:\n");
	
	for (i = 0; i < N; i++) {
		printf ("%s\n", pstr);
	}
	return 0;
 } 
 void sort(char **p)
 {
 	int i, j;
 	char *temp;
 	
 	for (i = 0; i < N; i++) {
 		for (j = i+1; j < N; j++) {
 			if (strcmp(*(p+i), *(p+j)) > 0) {
 				temp = *(p+i);
 				*(p+i) = *(p+j);
 				*(p+j) = temp;
			 }
		 }
	 }
 }
