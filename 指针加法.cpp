//ָ��ӷ� 
#include<stdio.h>
#define SIZE 4

int main()
{
	short datas [SIZE];   //short ����ռ�� 2 ���ֽ� 
	short * pti, index;   //double ����ռ�� 8 ���ֽ� 
    double bills[SIZE], * ptf;
	    
	pti = datas;
	ptf = bills;
	
	printf("%23s %18s\n", "short", "double");    //%23 �� %18 ��������ϸ��ַ������ֵļ���������ǵ����п�ͷ�ļ���� 
	
	for ( index = 0; index < SIZE; index ++)
	printf ("pointers + %d: %10p %10p\n", index, pti + index, ptf + index);  //ָ��+ 1 ��ָ�������һλ 
	
	return 0;
}
