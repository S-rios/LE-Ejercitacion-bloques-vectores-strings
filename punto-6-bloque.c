#include <stdio.h>

float var1,var2,res;
unsigned char op;
int seguir;
 int main (void){
   do{
    printf("Ingrese el primer valor:\n");
    scanf("%f",&var1);
    printf("Ingrese el segundo valor:\n");
    scanf("%f",&var2);
    printf("Ingrese la operacion\n");
    //fflush(stdin);
    scanf(" %c",&op);
    printf("operacion: %c\n",op);
    switch(op){
        case '+':res=var1+var2;
                break;
        case '-':res=var1-var2;
                break;
        case '*':res=var1*var2;
                break;
        case '/':
                if(var2!=0)res=var1/var2;
                else printf("Error no se puede dividir por cero\n");
                break;
    }
    printf("%f %c %f = %f\n",var1,op,var2,res);
     printf("si desea continuar escriba 1, si no escriba 0\n");
     scanf("%d",&seguir);
     }while(seguir != 0);
    return 0;
}
