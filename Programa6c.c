/*Karla Alexia Guerrero González
Práctica 9 11/10/24
Programa 6c correspondiente a la práctica*/


#include <stdio.h>
int main ()
 {
 int lista[5] = {10, 8, 5, 8, 7};
 int *ap = lista; 
 int indice = 0;
 printf("\tLista\n");

 do
 {
 printf("\nCalificación del alumno %d es %d", indice+1, *(ap+indice));
 indice++;
 }
 while (indice < 5)
 printf("\n");
 return 0;
}