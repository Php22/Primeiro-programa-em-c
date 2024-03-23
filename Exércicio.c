#include <stdio.h>

int main(void) {
  //calcula a média
  float nota1, nota2, nota3, media = 0;
  //printf("Nota1: %f \nNota2: %f \nMedia: %f \n",nota1, nota2, media);
  printf("\nInforme uma nota 1: ");
  scanf("%f", &nota1);
  printf("\nInforme uma nota 2: ");
  scanf("%f", &nota2);
  media = (nota1 + nota2) / 2;
  printf("Sua média é: %.2f", media);
  
/* escreva as condições aqui
  SE (media >= 7)
    escrever "Aprovado"
  SENAO
    escrever "Reprovado"*/

//verifica se você foi aprovado, reprovado ou ficou de recuperação.
if (media >= 7) {
    printf("\nAprovado ");
}
  
else {
  if (media <=5 ) {
    printf("\nReprovado ");
  }  
else {
  printf("\nRecuperação ");
  }
 } 
}
/* se media estiver entre 5.0 e 6.9 o aluno faz uma prova para recuperação. A nova nota será somada com a maior nota e se a nova media for maior ou igual a 7.0 o aluno será aprovado,senão está reprovado após a recuperação*/
