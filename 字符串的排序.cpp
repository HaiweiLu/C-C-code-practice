//�����ַ�������С�������� 
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

        gets(str[i]);  //����N���ַ���

    sort(str, n);        //��������ַ�������

    printf("sort string:\n");

    for(i = 0; i < n; i ++)

        puts(str[i]);

    return 0;

}

void sort(char array[][1],int n)   //����������

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

            strcpy(temp, array[i]);   //�ַ�������˳��

            strcpy(array[i], array[k]);

            strcpy(array[k], temp);

        }

    }

}

