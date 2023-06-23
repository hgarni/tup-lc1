//Ejercicio 2
//Crear una función llamada “signo”, que reciba un número real, 
//y devuelva un número entero con el valor: -1 si el número es negativo, 
//1 si es positivo o 0 si es cero.

#include <stdio.h> 

int signo(float num); 

int main() 
{ 
    float numero = 0; 
    while (numero > -1000000) 
    { 
        printf("\nEscriba un numero real: "); 
        scanf("%f", &numero); 
        printf("%d", signo(numero));
    } 
    return 0; 
} 

int signo (float num)
{ 
    int sig; 
    if (num > 0) {sig = 1; } 
    if (num == 0) {sig = 0; } 
    if (num < 0) { sig = -1;} 
return sig; 
}
