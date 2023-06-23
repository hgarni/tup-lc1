//Ejercicio 1 de la practica 6 de funciones
//Crear una función que calcule el cubo de un número real (float). 
//El resultado deberá ser otro número real. 
//Probar esta función para calcular el cubo de 3.2 y el de 5. */

#include <stdio.h> 

float cubica(float numero) 
{ 
    float cubica; 
    cubica = numero * numero * numero;
    return cubica;
}

int main()
{ 
    /* Crear una función que calcule el cubo de un número real (float). 
     * El resultado deberá ser otro número real. 
     * Probar esta función para calcular el cubo de 3.2 y el de 5. */

    float numero; 
    float cubo; 
    int i=0; 

    while(numero >= -1000000) 
    { 
        if(i==0) { 
            printf("\nEscriba un numero real: "); 
        } 
        else { 
            printf("\nEscriba otro numero real: "); 
        } 
        
        scanf("%f", &numero); 
        printf("%f elevado al cubo es %f\n", numero,cubo=cubica(numero)); 
        i ++;
    } 
            
    return 0;
}