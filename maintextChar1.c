#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	  
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
     
	 printf("La cadena %s tiene %i caracteres\n\n", nombre, longitud);
     
     printf("--> PRESS q for exit\n");
     
     while(getch()!='q'){
	 }


/*lo anterior es lo mismo que esto: */
/*     
int main(int argc,char *argv[])
     {
     char nombre[] = { 'B', 'e', 'n', 'j', 'a', 'm', 'i', 'n', '\0' };

     printf( "Texto: %s\n", nombre );
     }
*/
	return 0;
}
