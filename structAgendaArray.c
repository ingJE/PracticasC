#include <stdio.h>

#define ELEMENTOS       3

struct personal {
       char nombre[30];
       char apellido[40];
       char telefono[10];
       int edad;
       };

struct personal amigo[ELEMENTOS];

int main()
     {
     int numPersonal;

     for( numPersonal=0; numPersonal<ELEMENTOS; numPersonal++ )
          {
          printf( "\nDatos del contacto número %i:\n", numPersonal+1 );
          printf( "Nombre: " ); fflush( stdout );
          gets(amigo[numPersonal].nombre);
          printf( "Apellido: " ); fflush( stdout );
          gets(amigo[numPersonal].apellido);
          printf( "Teléfono: " ); fflush( stdout );
          gets(amigo[numPersonal].telefono);
          printf( "Edad: " ); fflush( stdout );
          scanf( "%i", &amigo[numPersonal].edad );
          while(getchar()!='\n');
          }
     /* Ahora imprimimos sus datos */
     for( numPersonal=0; numPersonal<ELEMENTOS; numPersonal++ )
          {
          printf( "El contacto %s ", amigo[numPersonal].nombre );
          printf( "%s tiene ", amigo[numPersonal].apellido );
          printf( "%i años ", amigo[numPersonal].edad );
          printf( "y su teléfono es el %s.\n" , amigo[numPersonal].telefono );
          }
     }
