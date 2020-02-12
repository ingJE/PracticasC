#include<stdio.h>

int main(){
	
	int num = 50;
	
	int *p_num = &num; 		//Declaro puntero, tiene la direccion de num
	
//	p_num = &num;
	
	 printf("Hola Mundo\n");
	 
	 printf("dato: %i",num);	
	 printf("\ndireccion de memoria del dato: %p",&num);
	 
	 num++;
	 	 
	 printf("\ndato: %i",*p_num);
	 
	 printf("\ndireccion  de memoria donde esta el dato: %p",p_num);
	 
	 return 0;

}
