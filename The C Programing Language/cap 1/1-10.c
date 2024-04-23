#include <stdio.h>

int main()
{
  int c;

  // conta quantos tabs/linhas/espaços foram dados
    while ((c = getchar()) != EOF)
        if (c == '\t'){
            printf("\\t\n");}
        else if (c == '\b'){
           printf("\\b\n");}
        else if (c == '\\'){
            printf("\\\n");}
}
