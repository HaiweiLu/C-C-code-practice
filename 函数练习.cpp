#include<stdio.h>

//void cheer()
//{
//	printf("cheer\n");
//}
//
//int main()
//{
//	cheer();
//	return 0;
//}

void sum(int a,int b)
{
	int i;
	int sum=0;
	for(i=a;i<=b;i++){
	sum+=i;
    }
    printf("%d\n",sum);
}

int main()
{
	sum(10,20);
	
	return 0;
}
