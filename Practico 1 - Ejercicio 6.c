#include <stdio.h>
#include <stdlib.h>
/*Dise�ar un programa que me permita acumular valores en un ciclo repetitivo �for� y
luego mostrar el resultado final. Para esto se deber� hacer su correspondiente
diagrama de flujos y posteriormente su codificaci�n en el lenguaje C*/

    int main(){
        int z=0, x;
            for(x=0; x<=20; x++)
            {
                z=z+x;
            }
                printf("la numeros de numeros va a ser igual a: %d",z);
        return 0;
    }
