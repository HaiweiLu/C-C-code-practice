#include<stdio.h>
/* 
int search(int key, int a[], int len)    //��Ҫ����ͬ��ĸ ,�������a�������飬�Ͳ�Ҫ����aΪ������ 
{
	int ret = -1;
	for ( int i = 0; i< len; i++ ) 
	{
		if ( key == a[i] ) 
		{	
		  ret = i;
		  break;
	    }
	} 
	return ret;
}

int main()
{
	int a[] = {12, 34, 56, 15, 76, 6, 8, 9};
	int r = search( 6, a, sizeof(a)/sizeof(a[0]));
	printf("%d", r );
	return 0;
 }    */ 
 
 int amount[] = {1, 5, 10, 25, 50};
 char *name[] = {"penny", "nickel", "dime", "quarter", "half-dollar"};
 //[����]���޳ɽ��ַ�������ת��Ϊ'char*' [-Wwrite-strings]
 
 struct {
 	int amount;
	char *name;
 } coins [] = {                 //[����]û�����ӵ��������ͣ����������������ӵı���'<anonymous struct> coins []'
    {1, "penny" },
	{5, "nickel"},
	{10,"dime"},
	{25,"quarter"},
	{50,"half-dollar"} 
 };
 
 int search(int key, int a[], int len)    //��Ҫ����ͬ��ĸ ,�������a�������飬�Ͳ�Ҫ����aΪ������ 
{
	int ret = -1;
	for ( int i = 0; i< len; i++ ) 
	{
		if ( key == a[i] ) 
		{	
		  ret = i;
		  break;
	    }
	} 
	return ret;
}

int main()
{
//	int a[] = {12, 34, 56, 15, 76, 6, 8, 9};
    int k = 5;
//	int r = search( k, amount, sizeof(amount)/sizeof(amount[0]));
    for ( int i=0; i<sizeof(coins)/sizeof(coins[0]); i++ )
	{ 
	   if ( k = coins[i].amount) {
	   	printf("%s\n", coins[i].name);
	   	break;
	   } 
	 } 
/*	if ( r > -1 )
	{
		printf("%s\n",name[r]);
	}
//	printf("%d", r );      */
	return 0;
}
