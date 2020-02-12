#include <stdio.h>

struct agendaTelef{
	char nombre[30];
	char apellido[30];
	char telefono[12];
	char direccion[15];
	int edad;
	char empresa[15];
	};
	
struct agendaTelef personal;

int main(){
	printf("Ingrese nombre: ");
	fflush(stdout);
	scanf("%s", &personal.nombre);
	
	printf("Ingrese apellido: ");
	fflush(stdout);
	scanf("%s", &personal.apellido);
	
	printf("Ingrese telefono: ");
	fflush(stdout);
	//gets(personal.telefono);
	scanf("%s", &personal.telefono);
	
	printf("Ingrese su edad: ");
	fflush(stdout);
	scanf("%i", &personal.edad);
	
	printf("Ingrese direccion: ");
	fflush(stdout);
	//gets(personal.direccion);
	scanf("%s", &personal.direccion);
	
	printf( "El contacto %s %s (%i anios), tiene el numero: %s y su direccion es %s\n", personal.nombre,
             personal.apellido, personal.edad, personal.telefono, personal.direccion );
	
	
}
