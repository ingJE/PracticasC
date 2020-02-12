#include <stdio.h>

int main (){
	
	int num;
	
	int *p_num = &num;	//puntero apunta a la direccion de la variable num
	
	printf("ingresar un numero: ");
	scanf("%d", &num);
	
	printf("numero = %i\n", num);
	
	printf("numero = %i", *p_num);
	
	return 0;
}
