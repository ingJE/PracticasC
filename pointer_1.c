#include <stdio.h>

int suma( int *a, int b )
     {
     int c;

     c = *a + b;
     //*a = 0;
     return c;
     }

int main()
     {
     int var1, var2, resultado;

     var1 = 5; var2 = 8;
     
	 resultado = suma(&var1, var2);
	 
     printf( "La suma es =  %i", resultado , var1 );
     
     }
