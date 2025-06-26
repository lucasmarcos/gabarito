#include <stdio.h>

/*
Implemente um sistema para gerenciar uma biblioteca usando estruturas com ponteiros para estabelecer relacionamentos entre autores e livros.

Funções a implementar:

\begin{itemize}
\item Ler Dados do Autor
\item Ler Dados do Livro
\item Ordenar por Ano
\end{itemize}
*/

#define MAX_NOME 128
#define MAX_TITULO 128
#define MAX_LIVROS 64
#define MAX_AUTORES 32

struct autor {
  int id;
  char nome[MAX_NOME];
  char nacionalidade[MAX_NOME];
  int anoNascimento;
};

struct livro {
  int id;
  char titulo[MAX_TITULO];
  int anoPublicacao;
  int numPaginas;
  struct autor *autor;
};

int main(int argc, char *argv[])
{
  return 0;
}
