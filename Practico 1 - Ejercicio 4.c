#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*Se desea calcular independientemente la suma de los números pares comprendidos entre 1 y 200.*/
    int main(){
        int z=0, x;
            for(x=0; x<=200; x=x+2)
            {
                printf("los valores son %d\n",x);
                z=z+x;
            }
                printf("la suma de los numeros pares va a ser igual a: %d",z);
        return 0;
    }
