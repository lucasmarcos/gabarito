#include <stdio.h>

// Implemente um programa que utilize estruturas para representar pontos e retângulos, e verifique se um ponto está dentro de retângulos específicos.

struct ponto {
  float x;
  float y;
};

struct retangulo {
  struct ponto inf_esq;
  struct ponto sup_dir;
};

int pontoNoRetangulo(struct ponto p, struct retangulo r) {
  return (p.x >= r.inf_esq.x && p.x <= r.sup_dir.x &&
      p.y >= r.inf_esq.y && p.y <= r.sup_dir.y);
}

struct ponto criarPonto(float x, float y) {
    struct ponto p;
    p.x = x;
    p.y = y;
    return p;
}

struct retangulo criarRetangulo(float x1, float y1, float x2, float y2) {
    struct retangulo r;
    r.inf_esq.x = (x1 < x2) ? x1 : x2;
    r.inf_esq.y = (y1 < y2) ? y1 : y2;
    r.sup_dir.x = (x1 > x2) ? x1 : x2;
    r.sup_dir.y = (y1 > y2) ? y1 : y2;
    return r;
}

int main(int argc, char *argv[])
{
  struct retangulo r = criarRetangulo(0, 0, 5, 3);
  struct ponto p = criarPonto(2.5, 1.5);
  printf("%d\n", pontoNoRetangulo(p, r));
  return 0;
}
