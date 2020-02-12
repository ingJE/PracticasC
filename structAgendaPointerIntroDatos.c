#include <stdio.h>

struct numPersonal {
       char nombre[30];
       char apellido[40];
       int edad;
       };

struct numPersonal amigo, *p_amigo;

int main()
     {
     p_amigo = &amigo;

     /* Introducimos los datos mediante punteros */
     printf("Nombre: ");fflush(stdout);
     gets(p_amigo->nombre);
     printf("Apellido: ");fflush(stdout);
     gets(p_amigo->apellido);
     printf("Edad: ");fflush(stdout);
     scanf( "%i", &p_amigo->edad );

      /* Mostramos los datos */
      printf( "El amigo %s ", p_amigo->nombre );
      printf( "%s tiene ", p_amigo->apellido );
      printf( "%i anios.\n", p_amigo->edad );
      }
