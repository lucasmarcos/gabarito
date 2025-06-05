#include <stdio.h>

void remover(int* vetor, int* tamanho, int posicao) {
  if (posicao < 0 || posicao >= *tamanho) {
    return;
  }

  for (int i = posicao; i < *tamanho - 1; i++) {
    vetor[i] = vetor[i + 1];
  }

  vetor[*tamanho - 1] = 0;
  (*tamanho)--;
}

void inserirElemento(int* vetor, int* tamanho, int tamanhoMax, int posicao, int valor) {
  if (*tamanho >= tamanhoMax) {
    return;
  }

  if (posicao < 0 || posicao > *tamanho) {
    return;
  }

  for (int i = *tamanho; i > posicao; i--) {
    vetor[i] = vetor[i - 1];
  }

  vetor[posicao] = valor;
  (*tamanho)++;
}

int main(int argc, char *argv[])
{
  return 0;
}
