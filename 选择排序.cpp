#include<stdio.h>
int max( int a[], int len )
{
	int maxid = 0;
	for ( int i = 1; i < len; i++ ) //�� i <= len ʱ�������� ��Ϊʲô�� 
	{                               //�Ƚ����������Ĵ�С���ó����ģ��ٰ����������ʣ�µ����ٽ��бȽ� 
	   if ( a[i] > a[maxid] ) 
	   {
	   	   maxid = i;
	   }		  	
	}
	return maxid;
}

int main()
{
	int a[] = {2, 23, 45, 67, 12, 77, 5};
	int len = sizeof(a)/sizeof(a[0]);
	//ѡ������ 
	for (int i=len-1; i>0; i-- )
	{
		int maxid = max( a, i+1);
		int t = a[maxid];
		a[maxid] = a[i];
		a[i] = t;
    }
	for ( int i=0; i< len; i++ )
	{
		printf("%d ", a[i] );
	}
	return 0;
}
