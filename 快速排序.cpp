#include<stdio.h>
int a[100000];
void qqsort(int left,int right)
{
    int i,j,mid;
    i=left; j=right;
    mid=a[i];  //将处于中间的比较的值赋值为a[i]
    if(i>=j)
        return ;
    while(i<j)
    {
        while(i<j&&a[j]>=mid)
            j--;        //如果比mid大，就继续比较前一个，直到找到
        a[i]=a[j];   //直到找到一个数比mid小的数，放到mid位置的前面去
        while(i<j&&a[i]<=mid)
            i++;      //如果比mid小，就继续比较后一个，直到找到
        a[j]=a[i];   //直到找到一个数比mid大的数，放到mid位置的后面去
    }
    a[i]=mid;
    qqsort(left,i-1);  //调整左边
    qqsort(j+1,right); //调整右边
}
int main()
{
    int i,n;
    while(scanf("%d",&n)!=EOF)
    {
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        qqsort(0,n-1);  //快速排序
        for(i=0;i<n;i++)
        {
            if(i!=n-1)
            {
                printf("%d ",a[i]);
            }
            else
            {
                printf("%d\n",a[i]);
            }
        }
    }
    return 0;
}
