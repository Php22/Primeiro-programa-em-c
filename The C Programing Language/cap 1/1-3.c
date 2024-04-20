#include <stdio.h>
// Cria uma tabla de conversão de fahrenheit pra celsius
int main(){
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  printf("Tabela de converção de fahrenheit pra celcius\n");

  fahr = lower;
  while (fahr <= upper) {
      celsius = 5 * (fahr-32) / 9;
      printf("%3.0f\t%6.1f\n", fahr, celsius);
      fahr = fahr + step;
  }
}
