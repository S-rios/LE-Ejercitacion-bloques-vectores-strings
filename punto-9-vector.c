#include <stdlib.h>
#include <time.h>
#include <stdio.h>
int Maximo;
int Minimo;
int valores[10];
char i;
int main() {
  printf("Bienvenido, por favor ingrse un valor maximo\n");
  scanf("%d",&Maximo);
  printf("Ahora, ingrse un valor minimo\n");
  scanf("%d",&Minimo);
  printf("Los valores son los siguientes:");
  for(i=0;i<10;i++){
    valores[i]=  rand() %(Maximo-Minimo)+Minimo;
    printf("\n%d",valores[i]);
  }
//Por alguna razon funciona solo si el valor minimo es 0.
return 0;
}