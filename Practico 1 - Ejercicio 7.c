#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*. Dise�ar un algoritmo que me permita ingresar 100 n�meros enteros. Luego determinar
cu�ntas veces se repite el n�mero 10 y mostrarlo.*/

    int main(){
        int z=0,contador=0,x,a=9;
            for(x=0; x<=a; x++)
            {
                printf("Ingresar numero entero: %d\n",x+1);
                    scanf("%d",&z);
                    if(z==10)
                    {
                        contador++;
                    }
            }
            printf("el numero 10 se repite %d veces", contador);
        return 0;
    }
