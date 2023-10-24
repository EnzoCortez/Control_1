#include <stdio.h>

/*Utilizando el concepto de función, construya un programa que calcule la suma de una serie de números enteros leídos del teclado. 
El programa debe detenerse cuando el usuario ingrese el número 0.

Por ejemplo:
Entrada: 1 5 3 5 0
Salida: 14

En este ejemplo el número que interrumpe la lectura es el 0*/

/*Se define la funcion suma*/


int suma(int a,int b){
    b=0;
    a=0;
    
    while (a>0)
    {
    scanf("%d",&a); 
    b=b+a;
    return b;
    }  
}

int main(int a,int b){
    printf("Ingrese la serie de numeros enteros");
    scanf("%d",&a);
    printf("El resultado de su serie es;", suma(a,b));
}