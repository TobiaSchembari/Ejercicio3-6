/*
 ============================================================================
 Name        : Ejercicio3-6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

float realizarDescuento(int numeroDescuento);
int main(void) {
setbuf(stdout,NULL);
/*Realizar un programa que: asigne a la variable numero1 un valor
solicitado al usuario, valide el mismo entre 10 y 100, realice un descuento del 5% a
dicho valor a través de una función llamada realizarDescuento(). Mostrar el resultado
por pantalla.*/
    float descuento;
	descuento = realizarDescuento(5);
	printf("El descuento es del: %f %",descuento);
	return EXIT_SUCCESS;
}
float realizarDescuento(int numeroDescuento){
	 int numero1;
	 float descuento;
	 do{

	 	 printf("Ingrese un valor entre 10 y 100:");
	 	 scanf("%d",&numero1);
	 	}while(numero1 < 10 || numero1 > 100);

	 descuento = (float)(numero1 * 5)/100;
	 return descuento;

 }
