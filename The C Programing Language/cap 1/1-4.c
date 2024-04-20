#include <stdio.h>
// Cria uma tabla de conversão de celsius pra fahrenheit
int main(){
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  printf("Tabela de converção de celsius para fahrenheit\n");

  celsius = lower;
  while (celsius <= upper) {
      fahr = (celsius * 9/5) + 32;
      printf("%3.0f\t%6.0f\n", celsius, fahr);
      celsius = celsius + step;
  }
}
