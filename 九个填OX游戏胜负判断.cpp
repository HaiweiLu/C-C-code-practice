#include<stdio.h>
int main()
{
	const int size = 3;
	int board[size][size];
	int i, j;
	int num0fx,num0f0;
	int result = -1;            //    -1:nobody win, 1:x win, 0:0 win
	
	for ( i=0; i<size; i++ ) {
		for ( j=0; j<size; j++ ) {
			scanf("%d", &board[i][j]);
		}
	}
	
	for ( i=0; i<size && result == -1; i++ )
	{
		num0f0 = num0fx = 0;
		for ( j=0; j<size; j++ ) {
			if ( board[i][j] == 1 ) {
				num0fx ++;
			} else {
				num0f0 ++;
			}
		}
		if ( num0f0 == size ) {
			result = 0;
		} else if ( num0fx == size ) {
			result = 0;
		}
	}
	
	if ( result == -1 ) {
		for ( j=0; j<size && result == -1; j++ ) {
			num0f0 = num0fx = 0;
			for ( i=0; i<size; i++ ) {
				if ( board[i][j] == 1 ) {
					num0fx ++;
				} else {
					num0f0 ++;
				}
			}
			if ( num0f0 == size ) {
				result = 0;
			} else if ( num0fx == size ) {
				result = 1;
			}
		}
	}
	
	num0f0 = num0fx = 0;
	for ( i=0; i<size; i++ ) {
		if ( board[i][j] == 1 ) {
			num0f0 ++;
		} else {
			num0f0 ++;
		}
	}
	if ( num0f0 == size ) {
		result = 0;
	} else if ( num0fx == size ) {
		result = 1;
	}
	
	num0f0 = num0fx = 0;
	for ( i=0; i<size; i++ ) {
		if ( board[i][size-i-1] == 1 ) {
			num0fx ++;
		} else {
			num0f0 ++;
		}
	}
	
	printf ("%d",result);
	return 0;
 } 
 
