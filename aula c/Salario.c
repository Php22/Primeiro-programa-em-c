#include <stdio.h>

int main(void) {
  //pega as informações do salario
  float salario, refeicao, reajuste, lucro, diferenca, hora, refeicaomes, dia = 0;
  printf("\nInforme o salário: ");
  scanf("%f", &salario);
  printf("\nInforme o novo valor do vale refeição: ");
  scanf("%f", &refeicao);
  printf("\nInforme o reajuste: ");
  scanf("%f", &reajuste);
  //calcula o vale refeição
  refeicaomes = refeicao * 20;
  //calcula o reajuste
  diferenca = salario * (reajuste / 100);
  //calcula o salario
  lucro = (salario + refeicaomes) + diferenca;
  printf("\nSeu salário atual é: %.2f", lucro);
  //calcula o quanto ele ganha por hora
  dia = lucro / 20;
  hora = dia / 6;
  printf("\nPor hora você ganha: %.2f", hora);
  
}
