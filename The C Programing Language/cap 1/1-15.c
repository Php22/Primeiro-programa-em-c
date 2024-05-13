#include <stdio.h>

int fahrenheit_to_celsius(int fahr);

int main(){
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  printf("Tabela de converção de fahrenheit pra celcius:\n");

  fahr = lower;
  while (fahr <= upper) {
      celsius = fahrenheit_to_celsius(fahr);
      printf("%3.0f\t%6.1f\n", fahr, celsius);
      fahr = fahr + step;
  }
  return 0;
}

int fahrenheit_to_celsius(int fahr){
  return 5 * (fahr-32) / 9;
}