#include <stdio.h>

int main(void) {
  //pega as informações do salario
  float salario, refeicao, reajuste, lucro, diferenca, hora = 0;
  printf("\nInforme o salário: ");
  scanf("%f", &salario);
  printf("\nInforme o vale refeição: ");
  scanf("%f", &refeicao);
  printf("\nInforme o reajuste: ");
  scanf("%f", &reajuste);
  //calcula o reajuste
  diferenca = (salario + refeicao) * reajuste / 100;
  //calcula o salario
  lucro = (salario + refeicao) + diferenca;
  printf("\nSeu salário atual é: %.2f", lucro);
  //calcula o quanto ele ganha por hora
  hora = lucro / 30;
  printf("\nPor hora você ganha: %.2f", hora);
  
}
