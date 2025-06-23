#include <stdio.h>

/*
Implemente uma função que receba um ponteiro para o início de um vetor, o tamanho atual e uma posição para remover. A função deve:

\begin{itemize}
\item Remover o elemento na posição especificada
\item Deslocar todos os elementos à direita uma posição para a esquerda
\item Preencher as posições finais com zeros
\item O vetor resultante terá tamanho efetivo N-1
\end{itemize}
*/

void remover(int *vetor, int *tamanho, int posicao) {
  if (posicao < 0 || posicao >= *tamanho) {
    return;
  }

  for (int i = posicao; i < *tamanho - 1; i++) {
    vetor[i] = vetor[i + 1];
  }

  vetor[*tamanho - 1] = 0;
  (*tamanho)--;
}

int main(int argc, char *argv[])
{
  return 0;
}
