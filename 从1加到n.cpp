#include <stdio.h>
//计算从1加到n 
int main ()
{
	int n;
	scanf ("%d",&n);
	
	int i=1,s=0;
	
	while (i<=n)
	{
		s=s+1;
		i++;
	}
	printf ("%d",s); 
	return 0;
 } 
