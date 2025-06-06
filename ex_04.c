#include <stdio.h>

/*
Implemente uma função que realize uma busca especial em um vetor de inteiros usando um algoritmo de "saltos".

A função deve:

\begin{itemize}
\item Receber um vetor de N inteiros (máximo 1024), o tamanho N, uma posição inicial X e um valor Y para busca
\item Verificar se na posição X está o valor Y
\item Se não estiver, usar o valor em Vetor[X] como próxima posição a verificar
\item Repetir o processo até encontrar Y ou detectar uma condição de parada
\item Manter um vetor auxiliar para rastrear posições já visitadas
\item Detectar ciclos: se uma posição for visitada novamente, retornar NULL
\item Validar posições: se a próxima posição for inválida (< 0 ou $\geq$ N), retornar NULL
\item Retornar o endereço da posição onde Y foi encontrado, ou NULL se não encontrado
\end{itemize}
*/

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
