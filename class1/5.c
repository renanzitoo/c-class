#include <stdio.h>

int main() {
  int idade, somaIdade;
  printf("Digite sua idade\n");
  scanf("%d", &idade);
  somaIdade = idade*(idade+1)/2;
  printf("Soma de idade %d", somaIdade);
  return 0;
}