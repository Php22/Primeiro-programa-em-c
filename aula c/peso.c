#include <stdio.h>

int main(void)
{
  int altura, genero, peso = 0;

  printf("Digite a sua altura em cm: ");
  scanf("%i", &altura);
  printf("\nDigite seu gênero (0 pra masculino ou 1 pra feminino): ");
  scanf("%i", &genero);

  if (genero == 0) {
    peso = (72.7*altura) - 58;
    printf("\nSeu peso ideal é: %d\n", peso);
  }
  else if (genero == 1) {
    peso = (62.1*altura) - 44.7;
    printf("\nSeu peso ideal é: %d\n", peso);
  }
}
