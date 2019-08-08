#include<stdio.h>
int main()
{
//	int a ;
//	a = 6;
//	printf("sizeof( int ) = % ld\n", sizeof(int));
//	printf("sizeof( double ) = % ld\n", sizeof(double));
//	printf("sizeof( long ) = % ld\n", sizeof(long));
//	printf("sizeof( char ) = % ld\n", sizeof(char));
//	printf("sizeof(a) = % ld\n", sizeof(a));
//	
//	int i = 0, p;
//	printf("0x%x\n", &i);    //用十六进制输出，可以让输出不显得太长 
//	printf("%p\n", &i);     // %p 直接输出 i 变量的（储存） 地址
//	printf("%p\n", &p);     // i and p 的地址相差是 四 ，是紧挨着的，且 i 在 p 上面，C语言是自顶向下分配地址的 
//	 
	int b[10];
	int *p;
	p = &b;
//	printf("%p\n", &b );  // &b , b, &b[0], 输出的地址相同 
//	printf("%p\n", b );
	printf("%p\n", &b[0]);  // b[0], b[1] 的地址相差 4 
	printf("%p\n", &b[1]); 
	printf("%p\n", *(p+1));
	printf("%p\n", *(p+2));
	
	return 0;
}
