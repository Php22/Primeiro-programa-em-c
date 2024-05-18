#include <stdio.h>
// Programa que soma os valores de dois vetores em ordem crescente.

int main() {
  float vetor1[10], vetor2[10], soma[10];
  int i;
  printf("Entre 10 numeros para serem somados\n");
  for (i = 0; i < 10; i++) {
    printf("Digite os numeros %2d: ", i + 1);
    scanf("%f", &vetor1[i]);
  }
  printf("\nDigite mais 10 numeros para serem somados\n");
  for (i = 0; i < 10; i++) {
    printf("Digite os numeros %2d: ", i + 1);
    scanf("%f", &vetor2[i]);
  }
  for (i = 0; i < 10; i++) {
    soma[i] = vetor1[i] + vetor2[i];
    printf("\nAs somas dão: %f", soma[i]);
  }
  return 0;
}
