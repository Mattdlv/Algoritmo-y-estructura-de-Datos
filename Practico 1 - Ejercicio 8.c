#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*. Dise�ar un algoritmo que me permita ingresar 100 n�meros enteros. Luego determinar
cu�ntas veces se repite el n�mero 10 y mostrarlo.*/

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
