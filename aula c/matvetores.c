#include <stdio.h>
// Programa que faz varias operações entres os vetores.

int main() {
  float vetor1[10], vetor2[10], opera[10];
  int i, ope;
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
  printf("\nUma operação entre os vetores(1-su,2-so,3-mu,4-di ): \n");
  scanf("%i", &ope);
  switch (ope) {
  case 1:
    for (i = 0; i < 10; i++) {
      opera[i] = vetor1[i] - vetor2[i];
      printf("\nAs subtraçõees dão: %f", opera[i]);
    }
    break;
  case 2:
    for (i = 0; i < 10; i++) {
      opera[i] = vetor1[i] + vetor2[i];
      printf("\nAs somas dão: %f", opera[i]);
    }
    break;
  case 3:
    for (i = 0; i < 10; i++) {
      opera[i] = vetor1[i] * vetor2[i];
      printf("\nAs multiplicações dão: %f", opera[i]);
    }
    break;
  case 4:
    for (i = 0; i < 10; i++) {
      opera[i] = vetor1[i] / vetor2[i];
      printf("\nAs divisões dão: %f", opera[i]);
    }
    break;
  default:
    printf("Não foi dada uma equação valida!");
  }
  return 0;
}
