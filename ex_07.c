#include <stdio.h>

// Implemente um programa que utilize estruturas para representar pontos e retângulos, e verifique se um ponto está dentro de retângulos específicos.

typedef struct {
  double x;
  double y;
} Ponto;

typedef struct {
  double x;
  double y;
  double largura;
  double altura;
} Retangulo;

Ponto lerPonto() {
  Ponto p;
  scanf("%lf %lf", &p.x, &p.y);
  return p;
}

Retangulo lerRetangulo(int numero) {
  Retangulo r;
  scanf("%lf", &r.x);
  scanf("%lf", &r.y);
  scanf("%lf", &r.largura);
  scanf("%lf", &r.altura);
  return r;
}

int pontoNoRetangulo(Ponto p, Retangulo r) {
  return (
    p.x >= r.x &&
    p.x <= r.x + r.largura &&
    p.y >= r.y &&
    p.y <= r.y + r.altura
  );
}

Retangulo criarRetangulo(double x, double y, double largura, double altura) {
  Retangulo r;
  r.x = x;
  r.y = y;
  r.largura = largura;
  r.altura = altura;
  return r;
}

Ponto criarPonto(double x, double y) {
  Ponto p;
  p.x = x;
  p.y = y;
  return p;
}

int main(int argc, char *argv[])
{
  return 0;
}
