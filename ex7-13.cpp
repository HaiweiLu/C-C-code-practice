//用递归方法求 n 阶勒让德多项式的值
  
#include<stdio.h>

double Legendre( double x, int n)
{
	double P;
	if ( n == 0 )   //注意判断相等用 “== ” 
	P = 1;
	else if ( n == 1)
	P = x;
	else
	P = ((2*n - 1) * x - Legendre(x, n-1) - (n - 1) * Legendre(x, n - 2))/n;
	
	return P;
}

int main()
{
	int n;
	double x;
	
	printf("input n and x:");
	scanf("%d%lf", &n, &x);
	
	printf("P=%f\n", Legendre(x, n));
	
	return 0;
}
