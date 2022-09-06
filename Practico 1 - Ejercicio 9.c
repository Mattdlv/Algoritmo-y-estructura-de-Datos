#include <stdio.h>
/*.Construye un diagrama y el programa correspondiente en C que, al recibir como datos los
pagos efectuados en el último mes, permite obtener la suma de los mismos. El programa
terminará cuando se ingrese un pago=0. Imprimir por pantalla el resultado de la suma*/

    int main(){
        int z, t;
        float n, s;
      printf("Ingresar la cantidad de pagos efectuados en el mes:");
        scanf("%d",&t);
      for(z=0; z<t; z++)
        {
          printf("ingresar pago: ");
            scanf("%f",&n);
          s = s + n;
            if(n==0)
          {
            printf("Fin del Programa");
           break;
          }
        }
        printf("El total de los %d pagos es: %1.2f",t,s);
        return 0;
    }
