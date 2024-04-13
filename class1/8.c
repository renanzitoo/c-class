#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
  double n1, raiz, potencia, log;
  printf("Digite um número\n");
  scanf("%lf", &n1);
  raiz = sqrt(n1);
  potencia = pow(n1, 2);
  log = log10(n1);

  printf("A raiz quadrada de é %.1lf\n", raiz);
  printf("A potência é %.1lf\n", potencia);
  printf("O logaritmo é %.1lf\n", log);

  return 0;
}