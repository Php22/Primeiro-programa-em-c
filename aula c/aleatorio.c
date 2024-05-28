#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int i, x, num, pro, vetor[6];
  srand(time(0));
  for (i = 0; i < 6; i++) {
    num = rand() % 101;
    for (x = 0; x < 6; x++) {
      if (num != vetor[x]) {
        vetor[i] = num;
      }
    }
  }

  for (i = 0; i < 6; i++) {
    for (x = 0; x < 6; x++) {
      if (vetor[i] < vetor[x]) {
        pro = vetor[i];
        vetor[i] = vetor[x];
        vetor[x] = pro;
      }
    }
  }

  for (i = 0; i < 6; i++) {
    printf("Numero sorteado: %d \n", vetor[i]);
  }
  return 0;
}

