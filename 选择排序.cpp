#include<stdio.h>
int max( int a[], int len )
{
	int maxid = 0;
	for ( int i = 1; i < len; i++ ) //当 i <= len 时程序会出错 （为什么） 
	{                               //比较数组中数的大小，拿出最大的，再把它放在最后，剩下的数再进行比较 
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
	//选择排序 
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
