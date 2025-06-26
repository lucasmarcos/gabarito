#include <stdio.h>
#include <math.h>

struct forma {
  int tipo;
  double altura;
  double largura;
};

double calcular(struct forma *f) {
  double area;

  switch (f->tipo) {
    case 1:
      area = f->altura * f->largura;
      break;
    case 2:
      area = M_PI * f->altura * f->altura;
      break;
    default:
      area = -1;
      break;
  }

  return area;
}

struct forma criar_retangulo(double altura, double largura) {
  struct forma ret;
  ret.tipo = 1;
  ret.altura = altura;
  ret.largura = largura;
  return ret;
}

struct forma criar_circulo(double raio) {
  struct forma circ;
  circ.tipo = 2;
  circ.altura = raio;
  circ.largura = 0;
  return circ;
}

int main(int argc, char *argv[]) {
  double a, b, c;

  scanf("%lf %lf", &a, &b);

  struct forma retangulo = criar_retangulo(a, b);

  scanf("%lf", &c);

  struct forma circulo = criar_circulo(c);

  printf("%lf\n", calcular(&retangulo));
  printf("%lf\n", calcular(&circulo));

  return 0;
}
