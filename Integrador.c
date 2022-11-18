/* Programa que se le pide un número y este número sea la cantidad de palabras que se van a poder ingresar,(ingresa las palabras) y como respuesta.
te digo cual es la más larga.*/
#include <stdio.h>
//#include <string.h> libreria de string que creo que no podemos usar.

int cant;
char i;
int CalLong(char palabra[30]);
int Mayor;
char palabraM[30];
int main(void) {
  int Resultado;
  printf("Bienvenido, por favor ingrese un tope de palabras\n");
  scanf("%d", &cant);
  for (i = 0; i < cant; i++) {
    char palabra[30];
    printf("Ingrese su palabra por favor\n");
    scanf("%s", palabra);
    Resultado = CalLong(palabra);
    if (Resultado > Mayor) {
      Mayor = Resultado;
      for (int j = 0; j < 29; j++) {
        palabraM[j] = palabra[j];
      }
    }
  }
  printf("La palabra [%s] es la más larga, tiene %d letras\n", palabraM, Mayor);
  return 0;
}
int CalLong(char palabra[30]) {
  int letras = 0;
  for (int i = 0; palabra[i] != '\0'; i++) {
    if (palabra[i] != ' ')
      letras++;
  }
  return (letras);
}
