//�ö�ά�������������ǰʮ�� 
#include<stdio.h>
#define N 10
int main()
{
	int a[N][N];
	int i, j;
	
	for ( i = 0; i < N; i++ ) {
		for ( j = 0; j <= i; j++ ) {
			if ( j == 0 || j == i) {    //��ֵ����Ҫ�Һã��߼����壬���Խ����ȷ 
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
