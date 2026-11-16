#include <stdio.h>

int main(void) {
   int temperatura = 25;
   float tempF = (temperatura*9/5) + 32;
   printf("Temperatura: %d graus\nTemperatura: %f graus Fahrenheit\n", temperatura, tempF);
   return 0;
   }
