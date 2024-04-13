#include <stdio.h>

int main(void) {
  double n1, n2, n3, n4, media;

  printf("Digite a nota 1:\n");
  scanf("%lf", &n1);

  printf("Digite a nota 2:\n");
  scanf("%lf", &n2);

  printf("Digite a nota 3:\n");
  scanf("%lf", &n3);

  printf("Digite a nota 4:\n");
  scanf("%lf", &n4);

  media = (n1 + n2 + n3 + n4) / 4;
  printf("A média é: %.2lf", media);

  return 0;
}
