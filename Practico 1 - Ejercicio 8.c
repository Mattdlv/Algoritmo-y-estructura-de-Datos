#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*. Diseñar un algoritmo que me permita ingresar 100 números enteros. Luego determinar
cuántas veces se repite el número 10 y mostrarlo.*/

    int main(){
        int z,a=4,x,b=0;
      printf("Ingresar 5 numero entero: \n");
            for(x=0; x<=a; x++)
            {
                    scanf("%d",&z);
                    if(z>0)
                    {
                        b = b + z;
                    }
            }
            printf("la suma de los numeros positivos son: %d",b);
        return 0;
    }
