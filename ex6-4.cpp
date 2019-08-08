#include <stdio.h>

int main() 
{
   int a[6] = { 1, 3, 5, 7, 9, 11};
    int i, b, c;
    printf("input: ");
    scanf ( "%d", &b );
    
    for ( i = 0; i < 7; i++ )
    {
        if ( b <= a[i] )
        {
           c = i;
           break;
        }
    }

    for ( i = 0; i < c; i++ )
    {
        printf("%d ", a[i]);
    }
    
    printf("%d ", b );
    
    for ( i = c; i < 6; i++ )
    {
        printf("%d ", a[i]);
    }
    
    printf("\n");
    return 0;
}
