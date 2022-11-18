#include <stdio.h>
float Nota;
float Res;
int Can;
float Prom;
int main(void) {
  Res = 0;
  Can = 0;
  do{
    printf("Por favor ingrese la nota de su alumno o  -1 para finalizar\n");
    scanf("%f",&Nota);
    if(Nota!=-1 && Nota >=0 && Nota <=10){
      Res = Nota + Res;
      Can ++;
    }else if((Nota < 0 || Nota > 10) && Nota != -1){
      printf("La nota es irreal.\n");
    }
  }while(Nota != -1);
  Prom = Res/Can;
  printf("La cantidad de notas de su curso es de %d y el promedio de su curso es de %f",Can,Prom);
  return 0;
}
