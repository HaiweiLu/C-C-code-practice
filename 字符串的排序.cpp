//三个字符串，从小到大排序 
#include<stdio.h> 
#include<string.h>
void sort(char array[][1],int n);

int main(void)

{

    char str[10][1];

    int i,j,k,n;

    printf("input n (n<=10):");

    scanf("%d", &n);

    printf("input %d string:", n);

    for(i = 0; i < n; i ++)

        gets(str[i]);  //输入N个字符串

    sort(str, n);        //对输入的字符串排序

    printf("sort string:\n");

    for(i = 0; i < n; i ++)

        puts(str[i]);

    return 0;

}

void sort(char array[][1],int n)   //定义排序函数

{

    char temp[1];

    int i, j, k;

    for(i = 1; i < n-1; i ++)

    {

        k = i;

        for(j = i+1; j < n; j ++)

            if(strcmp(array[k], array[j]) > 0)

            k = j;

        if(k != i)

        {

            strcpy(temp, array[i]);   //字符串交换顺序

            strcpy(array[i], array[k]);

            strcpy(array[k], temp);

        }

    }

}

