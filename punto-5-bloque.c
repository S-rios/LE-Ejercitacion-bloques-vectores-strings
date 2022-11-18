#include <stdio.h>
#include <math.h>

float u;
float y;
float modulo;
float Calculo(float u, float y);

int main(void) {
  printf("Por favor ingrese su valor de u subx\n");
  scanf("%f",&u);
  printf("Por favor ingrese su valor de u suby\n");
  scanf("%f",&y);
  Calculo(u,y);
  printf("Su modulo es de:%f",modulo);
  return 0;
}
float Calculo(float u, float y){
  modulo = sqrt(u*u+y*y);
  return modulo;
}
