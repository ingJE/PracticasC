#include <stdio.h>

union _persona
      {
      char nombre[10];
      char inicial;
      } pers;

int main()
     {
     printf("Escribe tu nombre: ");
     gets(pers.nombre);
     printf("\nTu nombre es: %s\n", pers.nombre);
     printf("Tu inicial es: %c\n", pers.inicial);
     /* Cambiamos la inicial */
     pers.inicial='Z';
     printf("\nAhora tu nombre es: %s\n", pers.nombre);
     printf("y tu inicial es: %c\n", pers.inicial);
     }
