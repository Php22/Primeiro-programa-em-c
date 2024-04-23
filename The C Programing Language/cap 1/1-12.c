#include <stdio.h>

#define IN 1 //dentro da palavra
#define OUT 0 //fora da palavra

int main()
{
  int c, nl, nw, nc, state;

  state = OUT;
  nl = nw = nc = 0;
  while ((c = getchar()) != EOF) {
    ++nc;
    if (c == '\n') {
      ++nl;
    }
    if (c == ' ' || c  == '\n' || c == '\t') {
      state = OUT;
    }
    else if (state == OUT) {
      state = IN;
      ++nw;
    }
  }
  nc = nc - 2;
  printf("Linhas: %d\nPalavras: %d\nCaracteres: %d\n", nl, nw, nc);
}
