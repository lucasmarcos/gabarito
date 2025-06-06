#include <stdio.h>

// Implementar uma função que receba três ponteiros para inteiros e modifique os valores nos endereços apontados, organizando-os em ordem crescente.

void trocar(int *a, int *b)
{
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}

void ordenar(int *a, int *b, int *c)
{
  if (*a > *b) {
    trocar(a, b);
  }

  if (*b > *c) {
    trocar(b, c);
  }

  if (*a > *b) {
    trocar(a, b);
  }
}

int main(int argc, char *argv[])
{
  int a = 3, b = 2, c = 1;

  printf("%d %d %d\n", a, b, c);
  ordenar(&a, &b, &c);
  printf("%d %d %d\n", a, b, c);

  a = 1;
  b = 3;
  c = 2;

  printf("%d %d %d\n", a, b, c);
  ordenar(&a, &b, &c);
  printf("%d %d %d\n", a, b, c);

  return 0;
}
