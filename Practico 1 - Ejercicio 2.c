#include <stdio.h>
/*determinar un algoritmo que permita ingresar tres numeros
por teclado y determinar cual de ellos es el mayor. Por ultimo calcular
el promedio y mostrarlo por pantalla.*/

    int main(){
        int var1,var2,var3,nmax,prom;

            printf("ingresar el 1er numero: ");
                scanf("%d",&var1);
            printf("ingresar el 1er numero: ");
                scanf("%d",&var2);
            printf("ingresar el 1er numero: ");
                scanf("%d",&var3);

        if(var1>var2){
            if(var1>var3){
                nmax=var1;
            }
        else{
            nmax=var3;
        }
        }
        else{
            if(var2>var3){
                nmax=var2;
            }
        else{
            nmax=var3;
        }
        }
            prom = (var1 + var2 + var3)/3;
                printf("El numero mayor es: %d\n",nmax);
                printf("el promedio de los numeros es %d", prom);
        return 0;
    }
