
#include <stdio.h>

int main()
{
    
    char var;
    char a=0;
    unsigned char palabra[20];;
    printf ("ingrese una palabra de 20 caracteres máximo: \n"); scanf("%s",palabra);
    
    for(var=0;palabra[var]!=NULL && var<20;var++){
      if ((palabra[var]==97) || (palabra[var]==65)){
         a++;
        }
    }
    printf ("%s tiene %d letras a", palabra, a);
    return 0;
}