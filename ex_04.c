#include <stdio.h>

int *buscar(int vetor[], int n, int x, int y) {
  if (x < 0 || x >= n) {
    return NULL;
  }

  int visitadas[1024] = {0};
  int pos = x;

  while (1) {
    if (pos < 0 || pos >= n) {
      return NULL;
    }

    if (visitadas[pos] == 1) {
      return NULL;
    }

    visitadas[pos] = 1;

    if (vetor[pos] == y) {
      return &vetor[pos];
    }

    pos = vetor[pos];
  }
}

int main(int argc, char *argv[])
{
  return 0;
}
