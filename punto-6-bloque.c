
#include <stdio.h>

int var1,var2,res;
unsigned char op;
 int main (void){
    printf("Ingrese el primer valor:\n");
    scanf("%d",&var1);
    printf("Ingrese el segundo valor:\n");
    scanf("%d",&var2);
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
    printf("%d %c %d = %d\n",var1,op,var2,res);
    return 0;
}
    


