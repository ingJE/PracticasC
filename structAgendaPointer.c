#include <stdio.h>

struct numPersonal {
        char nombre[30];
        char apellido[40];
        char telefono[15];
        int edad;
        };

struct numPersonal amigo = {
       "Benja",
       "Mincito",
       "+549000000",
       2
       };

struct numPersonal *p_amigo;

int main()
      {
      p_amigo = &amigo;
      printf("%s ", p_amigo->nombre);
      printf( "%s tiene ", p_amigo->apellido );
      printf( "%i anios\n ", p_amigo->edad );
      printf( "y su telefono es el %s.\n" , p_amigo->telefono );
      }
      
/*  si se trabaja con punteros se debe usar el operador '->'.
 *  Este operador viene a significar algo así como: 
 *  "dame acceso al miembro ... del puntero ...".
 */
