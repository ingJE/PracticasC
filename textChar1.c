#include <stdio.h>
#include <string.h>
/*
 *  Punteros a cadena de caracteres
 *
 */

int main()
     {
     char nombre[] = "Benjamin";
     
     int longitud;
     
     char *p;
     
     p = nombre;

     printf( "Nombre: %s\n", nombre );
     printf( "Tamaño de la cadena: %i bytes\n", sizeof nombre );
     
     longitud = strlen(nombre);
     
     printf("La cadena %s tiene %i caracteres\n", nombre, longitud);
     
     //de otra forma:
     longitud = 0;
     while(*p != '\0'){
     	longitud++;
     	printf("Letra: %c\n", *p); /*Imprimo la letra actual*/
     	p++;
     	}
     
	 printf("La cadena %s tiene %i caracteres\n", nombre, longitud);
     }


/*lo anterior es lo mismo que esto: */
/*     
int main(int argc,char *argv[])
     {
     char nombre[] = { 'B', 'e', 'n', 'j', 'a', 'm', 'i', 'n', '\0' };

     printf( "Texto: %s\n", nombre );
     }
*/
