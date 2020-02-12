#include <stdio.h>

#define ELEMENTOS       3

struct estructura_amigo {
       char nombre[30];
       char apellido[40];
       char telefono[10];
       int edad;
       };

struct estructura_amigo amigo[] =
       {
       "Benja", "apellido", "+549 343400000", 2,
       "Lore", "mooros", "+5493", 42,
       "Ana", "Martinez", "533-5694", 20
       };

struct estructura_amigo *p_amigo;

int main()
     {
     int num_amigo;
     p_amigo = amigo;  /* apuntamos al primer elemento del array */

     /* Ahora imprimimos sus datos */
     for( num_amigo=0; num_amigo<ELEMENTOS; num_amigo++ )
          {
          printf( "El amigo %s ", p_amigo->nombre );
          printf( "%s tiene ", p_amigo->apellido );
          printf( "%i años ", p_amigo->edad );
          printf( "y su teléfono es el %s.\n" , p_amigo->telefono );
          /* y ahora saltamos al siguiente elemento */
          p_amigo++;  
          }
     }
