//4. Crear una función “esPrimo”, que reciba un número y devuelva el valor 1 si es un número primo 
//o 0 en caso contrario.

#include <stdio.h> 

int esPrimo (int n);

int main() 
{ 
    int num; 
    while (num > 0) 
    { 
        printf("Escriba un numero: "); 
        scanf("%d", &num); 
        printf("%d ", esPrimo(num)); 
    } 
    return 0; 
} 

int esPrimo (int n) 
{ 
    int r, res;

    if(n != 1) 
    { 
        r = 1; 
        res = 1; 
        
        while (res != 0) 
        { 
            res = n % ++r; 
        } 
        
        if (n == r) return 1;
         
        else return 0; 
    } 
    
    else return 1; 
}
