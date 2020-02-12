#include <stdio.h>


int main()
     {
     
     int temp[24]= { 15, 18, 20, 23, 22, 24, 22, 25, 26, 25, 24,
                                 22, 21, 20, 18, 17, 16, 17, 15, 14, 14, 13, 12, 12 };
     int *punt;

     punt = &temp;
     
     for( int a=0; a<24;a++){
     	printf( "La direccion de temp[%i] es %p y la de punt es %p.\n",
                  a, &temp[a], punt );
        punt++;
	 }
	
                  
	imprimir(&temp);
     
     }
     
void imprimir(int *punt){
	
	for(  int i=0; i<24; i++ )
          {
          	
        	printf("Temp[%i]: %5i\n", i, *punt); /* imprimo el array con su  valor*/
        
		    punt++;
          }
}
