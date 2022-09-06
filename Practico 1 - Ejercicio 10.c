#include <stdio.h>
/*.Construye un diagrama y el programa correspondiente en C que, al recibir como datos un
grupo de números naturales positivos, calcule el cuadrado de estos números y al final la suma
de los cuadrados. El programa terminará cuando se ingrese un 0. Imprimir por pantalla el
resultado de la suma de todos los cuadrados.*/

    int main(){
        int n, s;
       printf("ingresar numeros y para calcular la suma de los cuadrados ingrese 0.\n");
        scanf("%d",&n);
      while (n>0 && n*n)
      {
        printf("ingresa otro numero:\n");
            scanf("%d",&n);
      }
        printf("la suma de los cuadrados es: %d\n",s);

      return 0;
              }
