#include <stdio.h>
int main () 
{
    int I,b,b1,b2,b3,b4,b5;
    float c1=0.10,c2=0.075,c3=0.05,c4=0.03,c5=0.015,c6=0.01;
    scanf ("%d",&I);
    
     int i;
        i=I/100000;
        b1=100000*c1;
        b2=b1+100000*c2;
        b3=b2+200000*c3;
        b4=b3+200000*c4;
        b5=b4+400000*c5;
        if (i>10)  i=10;

        switch (i)
        {
            case 0:b=I*c1;
            break;
            case 1:b=b1+(I-100000)*c2;
            break;
            case 2:
            case 3:b=b2+(I-200000)*c3;
            break;
            case 4:
            case 5:b=b3+(I-400000)*c4;
            break;
            case 6:
            case 7:
            case 8:
            case 9:b=b4+(I-600000)*c5;
            break;
            case 10:b=b5+(I-1000000)*c6;
            break;
        }
        printf ("½±½ðÎª%d\n",b);

    return 0;
}

