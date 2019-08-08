#include<stdio.h>
#define N 10
int main()
{
	int a[N][N];
	int i, j;
	for ( i = 0; i < N; i++ ) {
	  	
		for ( j = 0; j < i+1; j++ ) {
		    if( i == j || j == 0 ) {
			a[i][j] = 1;
	        }
			else
				a[i][j] = a[i-1][j] + a[i-1][j-1];
	    }
    } 
    
    for( i = 0; i < N; i++ ) {
    for ( j = 0; j < i+1; j++ ) {
    	printf("%d\t", a[i][j]);
	}
	printf("\n");
    }
    return 0;
}
