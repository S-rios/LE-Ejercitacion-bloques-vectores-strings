#include <stdio.h>
int suma=0;
int producto=1;
int num;
char var=0;
int main()
{
    printf("Ingrese 10 números distintos a cero porfavor\n");
    
    do{
        scanf("%d", &num);
        if (num<0){
            producto=producto*num;
        }else if (num>0){
            suma=suma+num;
        }else{
            printf("Reinicie el programa y siga las instrucciones");
        }
        var++;
    }while(var!=10);
    printf("resultado de la suma: %d\n", suma);
    printf("resultado de la multiplicación: %d", producto);
    return 0;
}








