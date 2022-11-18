/* Programa al que se le pide un número y este número será la cantidad de palabras que se van a poder ingresar,(ingresa las palabras) y como respuesta
se recibe la más larga.*/
#include <stdio.h>


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
