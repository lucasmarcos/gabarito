#include <stdio.h>

/*
Implemente um sistema para gerenciar arquivos usando estruturas e funções com ponteiros.

Funções a implementar:

\begin{itemize}
\item Maior Arquivo
\item Arquivos Antes da Data
\item Arquivo Mais Novo
\item Listar por Pasta
\item Primeiro Alfabeticamente
\end{itemize}
*/

#define MAX_NOME 128
#define MAX_PASTA 128
#define MAX_ARQUIVOS 256
#define MAX_EXTENSAO 32

typedef struct {
  int dia;
  int mes;
  int ano;
} Data;

typedef struct {
  int id;
  char nome[MAX_NOME];
  char pasta[MAX_PASTA];
  char extensao[MAX_EXTENSAO];
  int tamanho;
  Data dataCriacao;
  Data dataModificacao;
} Arquivo;

typedef struct {
  Arquivo arquivos[MAX_ARQUIVOS];
  int numArquivos;
} SistemaArquivos;

int main(int argc, char *argv[])
{
  return 0;
}
