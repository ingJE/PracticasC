#include <stdio.h>

#define ELEMENTOS	24
int main()
     {
     int temp[ELEMENTOS]; /* Con esto ya tenemos declaradas las 24 variables */
     float media = 0;
     int hora;

     /* Ahora tenemos que dar el valor de cada una */
     for( hora=0; hora<ELEMENTOS; hora++ )
        {
        printf( "Temperatura de las %i: ", hora );
        scanf( "%i", &temp[hora] );
        media += temp[hora];
        }
          
    for (hora=0 ; hora<ELEMENTOS ; hora++ )
         {
         printf( "La temperatura a las %i era de %i grados.\n", hora, temp[hora] );
         }
         
     	media = media / ELEMENTOS;

     	printf( "\nLa temperatura media es %f\n", media );
     }

