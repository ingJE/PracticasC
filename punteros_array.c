#include <stdio.h>

int main(){
	
	int i, n[]= { 100,2,3,4,4,7,8,9,10,144 };
	
	int *p_n=&n;
	
	//o puedo hacer:
	
//	int *p_n;		//*p_n DATO
	
//	p_n = n;		//p_n Direccion de memoria

	
	
	//o puedo hacer 
	
//	int *p_n = n;

//	p_n = &n;
		
	
	

	
	for(i=0;i<10;i++){
		printf("\ndato n[%i]: %i",i,*p_n);
		
		printf("	-->	Posicion de memoria: %p", p_n); 
		
		p_n++;
	}
	
	return 0;
	
}
