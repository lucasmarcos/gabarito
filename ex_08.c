#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Implemente um sistema para gerenciar produtos de uma loja usando estruturas e ponteiros.

Funções a implementar:

\begin{itemize}
\item Vender Produto
\item Alterar Preço
\item Calcular Total Geral
\end{itemize}
*/

#define MAX_PRODUTOS 100
#define MAX_NOME 50

typedef struct {
  char nome[MAX_NOME];
  double valor;
  int estoque;
  double total;
} Produto;

Produto criarProduto(char *nome, double valor, int estoque) {
  Produto p;
  strcpy(p.nome, nome);
  p.valor = valor;
  p.estoque = estoque;
  p.total = 0.0;
  return p;
}

int venderProduto(Produto *produto, int quantidade) {
  if (quantidade <= 0) {
    return 0;
  }

  if (produto->estoque < quantidade) {
    return 0;
  }

  produto->estoque -= quantidade;
  produto->total += (produto->valor * quantidade);

  return 1;
}

void alterarValor(Produto *produto, double novoValor) {
  if (novoValor < 0) {
    return;
  }

  double valorAnterior = produto->valor;
  produto->valor = novoValor;
}

void adicionarEstoque(Produto* produto, int quantidade) {
  if (quantidade <= 0) {
    return;
  }
  produto->estoque += quantidade;
}

double calcularTotalVendas(Produto produtos[], int numProdutos) {
  double somaTotal = 0.0;
  for (int i = 0; i < numProdutos; i++) {
    somaTotal += produtos[i].total;
  }
  return somaTotal;
}

double calcularValorEstoque(Produto produtos[], int numProdutos) {
  double valorEstoque = 0.0;
  for (int i = 0; i < numProdutos; i++) {
    valorEstoque += (produtos[i].valor * produtos[i].estoque);
  }
  return valorEstoque;
}

int main(int argc, char *argv[])
{
  return 0;
}
