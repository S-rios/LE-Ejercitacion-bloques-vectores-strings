#include <stdio.h>

int main()
{
 int lista[9];
 int num;
 char i;
 char indice=-1;
  
  printf("ingrese una lista de 10 números\n");
    for(i=0;i<10;i++){
       scanf("%d", &lista[i]);
    }
    printf("ingrese un número a encontrar\n"); scanf("%d",&num);
    
    for(i=0;(i<20) && (indice==-1);i++){
        if (lista[i]==num){
            indice = i;
        }
    }
    if(indice==-1){
      printf("el número %d no esta en la lista de números proporcionada", num);
      return -1;
    }else{
      printf("el número %d se encuentra en la posicion %d", num, indice); 
      return 0;
    }
}
