#include <stdio.h>
#include <stdlib.h>

//El siguiente código abre un archivo llamado "ejemplo1.txt" en modo lectura y 
//lee dentro de él 

void main () 
{ 
    FILE *archivo; 
    
    char texto[100];

    //abrimos el archivo, en modo lectura 
    archivo = fopen("ejemplo_1.txt", "r"); 
    
    if (archivo != NULL) 
    {
  
        printf("\nEl contenido del archivo de prueba es \n\n"); 
    
        while (feof(archivo) == 0)  //Mientras no sea fin de archivo
        {
            fgets(texto, 100, archivo);

                   //imprimimos en consola lo almacenado en el array texto 
            printf("%s \n",texto);   
        }
        
        fclose (archivo); 
        
        //cerramos el archivo 
        system("pause");
    }
    else
    {
        printf("Error al abrir el archivo.");
    }
}