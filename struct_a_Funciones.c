#include <stdio.h>

struct estructura_amigo {
        char nombre[30];
        char apellido[40];
        char telefono[10];
        int edad;
        };

int suma( struct estructura_amigo arg_amigo )
    {
    return arg_amigo.edad+25;
    }
int main()
      {      
      struct estructura_amigo amigo = {
             "Juanjo",
             "Lopez",
             "592-0483",
             20
       };      
      printf( "%s tiene ", amigo.apellido );
      printf( "%i anios ", amigo.edad );
      printf( "y dentro de 25 anios tendra %i.\n", suma(amigo) );
      system( "PAUSE" );
      }


