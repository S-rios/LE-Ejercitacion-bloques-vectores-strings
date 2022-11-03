#include <stdio.h>
int Tope;
int Num;
int Res;
int main(void) {
  Num = 1;
  printf("Porfavor ingrese el tope\n");
  scanf("%d",&Tope);
    Tope = Tope - 3;
  printf("Los multiplos son:\n");
  while(Res <= Tope){
      Res = 3 * Num;
    printf("%d\n",Res);
    Num ++;
    }
  return 0;
}