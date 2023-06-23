//3. Crear una función que devuelva la primera letra de una cadena de texto.

#include <stdio.h> 
#include <stdlib.h> 


char primeraLetra (char* cadena); 

int main() 
{ 
    char palabra[10]; 
    printf("Escriba una palabra\n"); 
    scanf("%s", palabra); 
    printf("La primera letra es %c.\n", primeraLetra(palabra));
    system("pause"); 
    return 0; 
} 

char primeraLetra (char* cadena) 
{ 
    return cadena[0]; 
}