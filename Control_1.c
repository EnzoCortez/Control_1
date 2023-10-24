#include <stdio.h>

/*Utilizando el concepto de función, construya un programa que calcule la suma de una serie de números enteros leídos del teclado. 
El programa debe detenerse cuando el usuario ingrese el número 0.

Por ejemplo:
Entrada: 1 5 3 5 0
Salida: 14

En este ejemplo el número que interrumpe la lectura es el 0*/

/*Se define la funcion suma*/
int suma(int a,int b){
    return a+b;
}

/*Creacion del programa principal*/
int main(){
    int num,total=0;
    printf("Ingrese un número entero (0 para salir): ");
    do { /* Calculo y solicitud de datos */
        printf("Ingrese un número entero (0 para salir): ");
        scanf("%d", &num);
        total = suma(total, num);

    } while (num != 0);
    printf("La suma total es: %d\n", total);
    return 0;
}








