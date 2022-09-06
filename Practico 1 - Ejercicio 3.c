#include <stdio.h>
/*Diseñar un algoritmo que implemente una estructura repetitiva para determinar el mayor
de un grupo de 50 números ingresados por teclado.*/
    int main(){
        int n, nm, a;
            for(a=0; a<=50; a++)
            {
                printf("ingrese el total de 50 numeros \n");
                scanf("%d", &n);
              if(a==0)
              {
                nm=n;
              }
              else
              {
                if(n > nm) nm=n;
              }
            }
        printf("El nimero mayor ingresado es el: %d\n", nm);
        return 0;
    }
