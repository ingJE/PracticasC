#include <stdio.h>

int main(){
	char letra;

	char *p_letra = &letra;

//o puedo hacer:

//	char *p_letra;
	
//	p_letra = &letra;

	
	for(letra = 'a'; letra <= 'z'; letra++){
		printf("\n%c", *p_letra);
		printf(" --> Dir de memoria: %p", p_letra);
	}
	
	return 0;
}
