#include <stdio.h>

int main(){
	
	char nombre[20];
	
	printf("Escriba su nombre: \n");
	
	gets(nombre);
	
	printf("\nEl numero de vocales es: %i",cuentaVocales(nombre) );
	
	printf("\nEl numero de Letras es: %i",cuentaLetras(nombre) );
	
	return 0;
}

int cuentaVocales(char *s){
	
	int cont = 0;

	while(*s){		//mientras que S no sea nulo
		switch(*s){
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':	
			cont++;
		}
	
		s++; 
		
	}
	
	return cont;
}

int cuentaLetras(char *s){
	
	int contLetras = 0;
	
	while(*s){		//mientras que S no sea nulo
	
		contLetras++;
		
		s++;
			
		}
		
	
	return contLetras;
}
