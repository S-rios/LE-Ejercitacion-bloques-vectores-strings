#include <stdio.h>

int lista[]={5,6,1,7,12,8,10,22,2,3};
 int main (void){
    int i,j,temp;
    for (i=1; i<10; i++){
        for (j=0 ; j<9; j++){
            if (lista[j] > lista[j+1]){
                temp = lista[j];
                lista[j] = lista[j+1];
                lista[j+1] = temp;
            }
        }
    }
    for(i=0;i<10;i++)printf("%d ",lista[i]);
    return 0;
}

