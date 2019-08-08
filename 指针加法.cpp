//指针加法 
#include<stdio.h>
#define SIZE 4

int main()
{
	short datas [SIZE];   //short 型是占用 2 个字节 
	short * pti, index;   //double 型是占用 8 个字节 
    double bills[SIZE], * ptf;
	    
	pti = datas;
	ptf = bills;
	
	printf("%23s %18s\n", "short", "double");    //%23 与 %18 是与该行上个字符或数字的间隔（或者是到该行开头的间隔） 
	
	for ( index = 0; index < SIZE; index ++)
	printf ("pointers + %d: %10p %10p\n", index, pti + index, ptf + index);  //指针+ 1 是指针向后移一位 
	
	return 0;
}
