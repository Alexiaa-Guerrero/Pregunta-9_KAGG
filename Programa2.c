/*Karla Alexia Guerrero González
Práctica 9 11/10/24
Programa 2 correspondiente a la práctica*/

#include <stdio.h>
int main ()
{

 int lista[10];
 int indice=0;
 int numeroElementos=0;
 printf("\nDa un número entre 1 y 10 para indicar la cantidad de elementos que tiene el arreglo\n");
 scanf("%d",&numeroElementos);
 if((numeroElementos>=1) && (numeroElementos<=10))
{

 for (indice = 0 ; indice <= numeroElementos-1 ; indice++)
 {
 printf("\nDar un número entero para el elemento %d del arreglo", indice );
 scanf("%d",&lista[indice]);
 }
 printf("\nLos valores dados son: \n");

 for (indice = 0 ; indice <= numeroElementos-1 ; indice++)
 {
 printf("%d ", lista[indice] );
 }
 }
 else printf("el valor dado no es válido");
 printf("\n");
 return 0;
}
