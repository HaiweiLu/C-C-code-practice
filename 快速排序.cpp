#include<stdio.h>
int a[100000];
void qqsort(int left,int right)
{
    int i,j,mid;
    i=left; j=right;
    mid=a[i];  //�������м�ıȽϵ�ֵ��ֵΪa[i]
    if(i>=j)
        return ;
    while(i<j)
    {
        while(i<j&&a[j]>=mid)
            j--;        //�����mid�󣬾ͼ����Ƚ�ǰһ����ֱ���ҵ�
        a[i]=a[j];   //ֱ���ҵ�һ������midС�������ŵ�midλ�õ�ǰ��ȥ
        while(i<j&&a[i]<=mid)
            i++;      //�����midС���ͼ����ȽϺ�һ����ֱ���ҵ�
        a[j]=a[i];   //ֱ���ҵ�һ������mid��������ŵ�midλ�õĺ���ȥ
    }
    a[i]=mid;
    qqsort(left,i-1);  //�������
    qqsort(j+1,right); //�����ұ�
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
        qqsort(0,n-1);  //��������
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
