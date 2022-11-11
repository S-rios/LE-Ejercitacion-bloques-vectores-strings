
#include <stdio.h>
char caracter;
int i;
char frase[200];
int main()
{
    printf("ingrese una frase porfavor: \n"); fgets(frase,200,stdin);
    printf("ingrese el caracter que desea remplazar por '!': \n"); scanf("%c", &caracter);
    for(i=0;frase[i]!=NULL;i++){
        if(frase[i]==caracter){
            frase[i]=33;
        }
    }
    printf("nueva frase: %s", frase);
    return 0;
}










