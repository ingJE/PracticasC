#include <stdio.h>

int main () {

   int  var = 20;   /* actual variable declaration */
   int  *ip;        /* pointer variable declaration */

   ip = &var;  /* store address of var in pointer variable*/

   printf("Direccion de memoria de la variable: %x\n\nValor de la variable: %d\n\n", &var, var );

   /* address stored in pointer variable */
   printf("Direccion de memoria de la variable: %x\n\n", ip );

   /* access the value using the pointer */
   printf("Valor apuntado por el puntero *ip variable: %d\n", *ip );

   return 0;
}
