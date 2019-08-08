#include <stdio.h>
int main()
{	
	char cl[26], sl[26], p[20];
	int i, j, k;
	for (i=0, j='A', k='a'; i<26; cl[i]=j++, sl[i]=k++, i++);
	printf("Please enter password: ");
	
	gets(p);
	printf("Password: ");
	puts(p);
	
	for (i=0; i<20; i++)
	for (j=0; j<26; j++) {
	if (p[i]==cl[j]) {
	p[i]=cl[25-j]; 
	break;
	}
	if (p[i]==sl[j]) {
	p[i]=sl[25-j]; 
	break;
	}
	}
	printf("Original: ");
	puts(p);
	return 0;
}
