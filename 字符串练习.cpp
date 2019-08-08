#include<stdio.h>
#include<string.h>
void swap_string( char *str1, char *str2 );
int main()
{
	char str1[26], str2[27],str3[28];
	
	printf("ÇëÊäÈëÈý¸ö×Ö·û´®£º\n");
	gets(str1);
    gets(str2);
	gets(str3);
		
    if ( strcmp( str1, str2 ) > 0 )
    sawp_string( str1, str2 );
    if ( strcmp( str1, str3 ) > 0 )
    sawp_string( str1, str3 );
    if ( strcmp( str2, str3 ) > 0 )
    sawp_string( str2, str3 );
    
    printf("%s\n%s\n%s\n", str1, str2, str3 );
	
	return 0;
}

void sawp_string( char str1, char str2 )
{
	char temp[30];
	strcp( temp, str1 );
	strcp( str1, str2 );
	strcp( str2, temp ); 
} 
