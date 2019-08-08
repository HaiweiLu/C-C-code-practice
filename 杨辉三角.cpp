//用二维数组求杨辉三角前十行 
#include<stdio.h>
#define N 10
int main()
{
	int a[N][N];
	int i, j;
	
	for ( i = 0; i < N; i++ ) {
		for ( j = 0; j <= i; j++ ) {
			if ( j == 0 || j == i) {    //赋值条件要找好，逻辑不清，难以结果正确 
				a[i][j] = 1;
			}
			else 
			a[i][j] = a[i-1][j-1] + a[i-1][j];
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
	return 0;
 } 
