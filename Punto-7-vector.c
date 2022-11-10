#include <stdio.h>
float notas[20];
float Calculo(float notas);
float Prom;
float Suma = 0;
int main(void) {
  char aprobados = 0;
  char desaprobados = 0;
  char i;
  printf("Por favor ingrese las notas:\n");
  for (i = 0; i < 20; i++) {
      scanf("%f", &notas[i]);
  }
  for (i = 0; i < 20; i++) {
    Suma = Suma + notas[i];
  }
  for (i = 0; i < 20; i++) {
    if (notas[i] < 7) {
      desaprobados++;
    } else {
      aprobados++;
    }
  }
  Calculo(Suma);
  printf("Su promedio es de %f, la cantidad de alumnos que aprobaron es de %d "
         "y la cantidad que deberan recuperar es de %d",
         Prom, aprobados, desaprobados);
  return 0;
}
float Calculo(float sumatoria) {
  Prom = sumatoria / 20;
  return Prom;
}