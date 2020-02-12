#include <stdio.h>
#include <stdlib.h>


struct estructura_amigo {
        char nombre[30];
        char apellido[40];
        char telefono[10];
        int edad;
        };

int suma( struct estructura_amigo *arg_amigo )
    {
    return arg_amigo->edad+20;
    }
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	struct estructura_amigo amigo = {
             "Juanjo",
             "López",
             "592-0483",
             30
       };       
      printf( "%s tiene ", amigo.apellido );
      printf( "%i anios ", amigo.edad );
      printf( "y dentro de 20 anios tendra %i.\n", suma(&amigo) );
      system( "PAUSE" );
	return 0;
}
