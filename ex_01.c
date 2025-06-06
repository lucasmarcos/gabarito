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
  int a, b, c;

  scanf("%d %d %d", &a, &b, &c);
  ordenar(&a, &b, &c);
  printf("%d %d %d\n", a, b, c);

  return 0;
}

/*
casos de teste

1 2 3
1 2 3

10 30 20
10 20 30

21 31 11
11 21 31

22 12 32
12 22 32

33 23 13
13 23 33

34 14 24
14 24 34
*/
