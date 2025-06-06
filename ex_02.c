#include <stdio.h>

// Implementar uma função que busque um valor específico em um vetor de inteiros e retorne um ponteiro para a primeira ocorrência encontrada, ou NULL se o valor não for encontrado.

int *procurar(int *vetor, int x)
{
  for (int i = 0; i < 10; i++) {
    if (vetor[i] == x) {
      printf("%d\n", 10 - 1 - i);
      return &vetor[i];
    }
  }
}

int main(int argc, char *argv[])
{
  int vetor[10];

  for (int i = 0; i < 10; i++) {
    scanf("%d", &vetor[i]);
  }

  int x;

  scanf("%d", &x);

  procurar(vetor, x);

  return 0;
}
