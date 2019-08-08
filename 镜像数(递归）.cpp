/*#include <stdio.h> 
int main ()
{ 
 int munber;
    scanf ("%d",&munber);

    int  a=0,b=0,c=0;
    munber%=10;
    c=munber/10;

    while (c>0)
    {
       b=a;
       a%=10;
       b=b*10+a;
    }

    return 0;
} */
#include <stdio.h>
int convert(char s[],int n)    //定义了一个函数convert 
{
    int i;
    if((i=n/10)!=0)
         convert(s+1,i);
    *s=n%10+'0';
    return 0;
}
int main()
{
    int num;
    char str[10]=" ";
    printf("input integer data：");
    scanf("%d",&num);
    convert(str,num);                   //调用函数convert 
    printf("output string：\n");
    puts(str);
    return 0;
}
