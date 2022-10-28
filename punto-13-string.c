#include <stdio.h>

int main()
{  
    char palabra [30];
    printf("Ingrese su palabra porfavor\n");
    scanf("%s", palabra);
    int letras = 0;
   
    for (int i = 0; palabra[i] != '\0'; i++)
    {
        if (palabra[i] != ' ')
            letras++;
    }
    printf("[%s] tiene %d letras\n", palabra, letras);
    return(0);
}



