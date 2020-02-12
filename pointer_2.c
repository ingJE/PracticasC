/*
*Uso de Punteros
*/
#include <stdio.h>

int main(){
	
	int num1;
	
	int num2;
	
	int resultado;
	
	int operacion;
	
	int *p;
	
	printf("       USO DE PUNTEROS       \n\n");
	
	p = &num1;
	printf("Ingrese numero 1: \n");
	scanf("%i", &num1);
	printf("valor ingresado (n1): %i\n\n", *p);
	
	p = &num2;
	printf("Ingrese numero 2: \n");
	scanf("%i", &num2);
	printf("valor ingresado (n2): %i\n\n", *p);
	

	printf("seleccione la operacion: \n 1 --> SUMA\n 2 --> RESTA\n 3 --> PRODUCTO\n 4 --> DIVISION\n");
	printf(" 5 --> COMPARAR\n\n");
	printf("--> ");
	
	scanf("%i", &operacion);
	
	resultado = mat(&num1, &num2, operacion);
/*	switch(operacion){
		case 1:
			printf("Suma: %i + %i = %i \n", num1, num2, resultado);
			break;
		case 2:
			printf("Resta: %i - %i = %i \n", num1, num2, resultado);
			break;
		case 3:
			printf("Producto: %i x %i = %i \n", num1, num2, resultado);
			break;
		default:
			printf("Operacion no valida");
	}
*/	
	
	p = &resultado;
	
	*p *= 10;
	
	printf("Nuevo valor de resultado x 10: %i\n", *p);
	printf("El resultado esta en la direccion de memoria: %p\n", p);
	
	
	
	
}

int mat(int *n1, int *n2, int op){
	
	int result;
	
	switch(op){
		case 1: 
			result = *n1 + *n2;
			printf("Suma: %i + %i = %i \n", *n1, *n2, result);
			break;
		case 2: 
			result = *n1 - *n2;	
			printf("Resta: %i - %i = %i \n", *n1, *n2, result);
			break;
		case 3: 
			result = *n1 * *n2;	
			printf("Producto: %i x %i = %i \n", *n1, *n2, result);
			break;
		case 4: 
			result = *n1 / *n2;	
			printf("Producto: %i / %i = %i \n", *n1, *n2, result);
			break;
		case 5: 
			if(*n1 > *n2){
				printf("%i es mayor que %i\n", *n1, *n2);
			}
			else if (*n1 < *n2) {
				printf("%i es mayor que %i\n", *n2, *n1);
			}
			else{
				printf("Son iguales\n\n");
			}
			break;
		default: 
			printf("Operación no seleccionada\n");
		
	}
		
	return result;
}


