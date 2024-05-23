#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {  // fujncion principal

// Tipos de datos en C++

int num1 = 10;  // inicializando la variable de tipo    -32768 hasta 32768   
int num2, num3;  // variables entero sin inicializar
int suma = 0;
int resta = 0;
long l = 0;


// tipos de datos flotantes me permite poner decimales
float flotante = 3.2;  // 6 bytes
float pi = 3.1416;
double doble = 4.3;    // 8 bytes

// boleano
bool boleano = true;

// cadena de caracteres
char mensaje[16] = "Viva Costa Rica";
char nombre[50];
char caracter = 'A';
/*

printf("Digite un numero: ");
scanf("%i",&num1);
printf("Digite otro numero: ");
scanf("%i",&num2);

suma = num1 + num2;
resta = num1 - num2;
int multiplicar = 0;
multiplicar= num1 * num2;
int dividir =  0;
dividir = num1 / num2;

// operadores aritmeticos
printf("\n la suma es de %i", suma);
printf("\n la resta es de %i", resta);
printf("\n la multiplicacion es de %i", multiplicar);
printf("\n la division es de %i", dividir);
printf("\n");
*/

// acumuladores y contadores   
// contador 0 1 2 3 4  --  5 10 15 20 25   cont = 0    cont = cont + 1

// Ciclo do while   primero ejecuta y luego evalua
int op;
char opcion ='s';
int contador = 0;
do {
	system("cls");    // limpiar la pantalla
	printf("1- opcion 1 \n");
    printf("2- opcion 2\n");
    printf("3- opcion 3 \n");
    printf ("4 -salir \n");
    
    printf("digite una opcion: ");
	scanf("%i",&op);
	if(op == 1) 
		printf("se digito la opcion 1");
        else 	if(op== 2) 
		printf("se digito la opcion 2");
	 else if(op== 3)
		printf("se digito la opcion 3");
	else
		printf("opcion incorrecta");
		
			getch();
} while ((op!=4) );  // comparar  ==  ,     la asignacion = 

printf("salir del menu");
getch();

// Ciclo While
int cont = 0;
while(cont<10){ //OPERADORES LOGICA  AND = &&   OR = ||
	printf("%i",cont);
	printf("\n");
	cont+=2;   // cont++   ++cont   cont--  --cont  cont+=2  cont/=2  cont*=2
}



getch();

printf("hola mundo");
printf("\n");
printf("hola ");
printf ("\n mundo");
printf("\n");
printf("%f", pi);
printf("\n");
printf("%f", doble);
printf("\n");

// guardar el valor de un texto no se necesita el &
printf("\n Digite su nombre: ");
scanf("%s", nombre);    // Scanf solo toma la palabra hasta el espacio en blanco
//gets(nombre);         // toma todo la linea hasta el final
printf( nombre);

getch();

char continuar;

printf("Desea continuar: ");
	
continuar = getch();
printf("%s", continuar);



 // constante
 const double precio = 1500;

	return 0;
}
