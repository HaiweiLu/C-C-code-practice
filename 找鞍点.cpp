#include <stdio.h>
#include <stdbool.h>

int main(int argc, char **argv)
{

   int a[3][4] = {{ 9, 80, 205, 40 },{ 90, -60, 96, 1},{ 210, -3, 101, 89}};
   for ( int i = 0; i < 3; i++ )
   {
       for ( int j = 0; j < 4; j++ )
       {
           printf ( "%2d\t", a[i][j] );
       }
        printf ( "\n" );
   }

   int max = 0, min = 0;
   int row, column; 
   int count = 0;

   for ( int i = 0; i < 3; i++ )
   {
   	     max = a[i][0];
         bool isMax = 1;
       for ( int j = 0; j < 4; j++ )
       
           
           //for ( column = 0; column < 4; column++ )
           {
               if ( a[i][column] > max )
               {
                   isMax = 0;
                   break;
               }
	           
	           else if ( isMax > 0)
	           {
	               continue;
	           }
	           
	           min = a[i][j];
	           bool isMin = 1;
	
	           for ( row = 0; row < 3; row++ )
	           {
	               if ( a[row][j] < min )
	               {
	                   isMin = 0;
	                   break;
	               }
		           
		           else if ( isMin > 0)
		           {
		               continue;
		           }
		           count++;
		           printf ( "%d row,%d column,  %d\n", i, j, a[i][j] );
		        } 
	        } 
       
   }

  if ( count == 0)
  {
      printf ( "√ª’“µΩ∞∞µ„£°\n");
  }
    return 0;
}
