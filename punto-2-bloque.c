#include <stdio.h>
char Car;
int Int;
int main(void) {
  printf("Bienvenido, por favor ingrese un caracter para comenzar \n");
  scanf("%c",&Car);
  do{
    printf("Por favor, ingrese un valor para intentar adivinar\n");
    scanf("%d",&Int);
    if(Car == Int){
      printf("Has acertado el número, ¡FELICITACIONES!");
    }else if(Car > Int){
      printf("El número es más grande.\n");
    }else if(Car < Int){
      printf("El número es más chico.\n");
    }
  }while(Car != Int);
  return 0;
}