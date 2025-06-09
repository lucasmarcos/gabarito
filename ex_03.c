#include <stdio.h>

// Implemente uma função que receba um ponteiro para um vetor de inteiros e seu tamanho (N), e modifique o vetor preenchendo-o com os primeiros N números da sequência de Fibonacci.

void preencherFibonacci(int* vetor, int tamanho) {
  if (tamanho <= 0) {
    return;
  }

  if (tamanho >= 1) {
    vetor[0] = 0;
  }

  if (tamanho >= 2) {
    vetor[1] = 1;
  }

  for (int i = 2; i < tamanho; i++) {
    vetor[i] = vetor[i-1] + vetor[i-2];
  }
}

int main(int argc, char *argv[])
{
  int vetor[1024];

  int x;

  scanf("%d", &x);

  preencherFibonacci(vetor, x);

  for (int i = 0; i < x; i++) {
    printf("%d\n", vetor[i]);
  }

  return 0;
}

/*
casos de teste
10
0
1
1
2
3
5
8
13
21
34
*/
