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
//	printf("0x%x\n", &i);    //��ʮ�����������������������Ե�̫�� 
//	printf("%p\n", &i);     // %p ֱ����� i �����ģ����棩 ��ַ
//	printf("%p\n", &p);     // i and p �ĵ�ַ����� �� ���ǽ����ŵģ��� i �� p ���棬C�������Զ����·����ַ�� 
//	 
	int b[10];
	int *p;
	p = &b;
//	printf("%p\n", &b );  // &b , b, &b[0], ����ĵ�ַ��ͬ 
//	printf("%p\n", b );
	printf("%p\n", &b[0]);  // b[0], b[1] �ĵ�ַ��� 4 
	printf("%p\n", &b[1]); 
	printf("%p\n", *(p+1));
	printf("%p\n", *(p+2));
	
	return 0;
}
