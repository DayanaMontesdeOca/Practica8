/*Rivera Montes de Oca Dayana Monserrat
Lboratorio Practica 08, EJERCICIO 4 DEL EXAMEN*/

//Programa con una condición con while, que almacene un arreglo 
//undimensional de los primeros 10 números pares y que imprima el arreglo.

#include <stdio.h>

int main() 
  {
      int Pares[10];   
      int i=0;   
      int num=2;  
      while (i<10) 
        {
            Pares[i]=num;
            num+=2;
            i++;
        }
      i = 0;
      printf("Los primeros 10 números pares son:\n");
      while (i<10) 
        {
          printf("%d ", Pares[i]);
          i++;
        }
      return 0;
  }
