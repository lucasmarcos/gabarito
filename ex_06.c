#include <stdio.h>

/*
Implemente um sistema para gerenciar formas geométricas usando estruturas e ponteiros. O programa deve:

\begin{itemize}
\item Calcular Área
\item Calcular Perímetro
\end{itemize}
*/

// tipo = 1 retangulo, 2 circulo

struct forma {
  int tipo;
  int altura;
  int largura;
};

int calcular(struct forma *f)
{
  int res;

  switch (f->tipo) {
    case 1:
      res = f->altura * f->largura;
      break;
    case 2:
      res = -1;
      break;
    default:
      res = -1;
      break;
  }

  return res;
}

int main(int argc, char *argv[])
{
  return 0;
}
