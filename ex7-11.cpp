//用冒泡排序，给10个字符有小到大排序

#include<stdio.h>
#define N 10

 void sort(char str[] )
 {
 	int i, j;
 	char k;
 	
 	for ( i = 0; i < N - 1; i++ )
 		for ( j = i; j < N - 1 - i; j++ )
 			if ( str[j] > str[j+1] )
 			{
 				k = str[j+1];
 				str[j+1] = str[j];
 				str[j] = k;
			} 
 }
 
 int main()
 {
 	char str[11];
 	
 	gets( str );
 	
   sort( str ); 
   puts( str );
   
   return 0;
 	
  } 
