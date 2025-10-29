/*Rivera Montes de Oca Dayana Monserrat
Practica 08 Lbaoratorio EJERCICIO 4 DEL PDF*/

//Escriba un programa en C que pida dos números enteros al usuario, y determine cuál es
//mayor, el primero o el segundo. Modifíquelo para considerar también la posibilidad de
//que sean iguales.

#include <stdio.h>
int main() 
  {
    int n1, n2, i;
    for (i= 1; i<= 2; i++) 
      {
        printf("Ingrese el número (%d) entero: ", i);
        scanf("%d", &n2);
        if (i == 1) 
          {
            n1=n2;
          } 
        else 
          {
            if (n2>n1)
                printf("El segundo número (%d) es mayor que el primero (%d)\n", n2, n1);
            else 
                if (n2<n1)
                  printf("El primer número (%d) es mayor que el segundo (%d)\n", n1, n2);
                else
                  printf("Ambos números son iguales (%d)\n", n1);
          }
      }
    return 0;
  }
