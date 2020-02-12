#include <stdio.h>

int main(){
	
	int n = 10, *p_n = &n;
	float n2 = 10.5, *p_n2 = &n2;
	char n3 = 'a', *p_n3 = &n3;
	
	printf("Variable entera: \n");
	printf("Dato int : %i", *p_n);			//*p_n -->DATO 
	printf("\nPosicion de memoria de la variable int: %p\n", p_n);//p_n Direccion de memoria del DATO
	
	printf("\nVariable float: \n\n");
	printf("Dato float: %.2f", *p_n2);
	printf("\nPosicion de memoria del float: %p\n", p_n2);
	
	printf("\nVariable char: \n");
	printf("Dato char: %c", *p_n3);
	printf("\nPosicion de memoria del char: %p", p_n3);
}
