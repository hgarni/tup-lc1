//5.Crear una función que reciba un número cualquiera y que devuelva como resultado la suma de sus dígitos

#include <stdio.h> 
#include <stdlib.h> 

int sumaDeSusCifras(int numero); 

int main() 
{ 
    int num; 
    printf("Escriba un numero entero positivo: \n"); 
    scanf("%d", &num); 
    printf("La suma de las cifras del numero %d es: %d\n", num, sumaDeSusCifras(num)); 
    system("pause"); 
    
    return 0; 
} 

int sumaDeSusCifras (int numero) 
{ 
    int suma=0; 
    
    if (numero < 10) { return numero; } 
    
    else 
    { 
        while (numero >= 10) 
        { 
            suma += numero % 10; 
            numero /= 10; 
        } 
        
        suma += numero; 
        return suma; 
    } 
}