#include <stdio.h>
#include <stdlib.h>

void main () 
{ 
    FILE *fp; 
    
    char texto1[100] = "Texto dentro del fichero. "; 
    char texto2[100] = "Otro texto dentro del fichero.";
    
    //abrimos el archivo, en modo lectura 
    fp = fopen("ejemplo_2.txt", "w+"); 

    fprintf(fp, texto1); //escribimos en el archivo el texto almacenado //en el array texto1
    fprintf(fp, "%s", "\n"); //escribimos en el archivo un salto de línea
    fprintf(fp, texto2); //escribimos en el archivo el texto almacenado //en el array texto2

    fclose (fp); //cerramos el archivo system("pause"); }

    system("pause");
}
