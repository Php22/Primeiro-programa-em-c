#include <stdio.h>

int main()
{
  int c, nl;

  nl = 0;
  // conta quantos tabs/linhas/espaços foram dados
    while ((c = getchar()) != EOF)
        if (c == '\t'){
            ++nl;}
        else if (c == '\n'){
           ++nl;}
        else if (c == ' '){
            ++nl;}
  printf("%d\n", nl);
}
