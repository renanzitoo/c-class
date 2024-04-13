#include <stdio.h>

int main(){
  double temperaturaF, temperaturaC;
  printf("Digite a temperatura em F\n");
  scanf("%lf", &temperaturaF);
  temperaturaC =(temperaturaF - 32)*5/9;
  printf("Temperatura em C %.2lf", temperaturaC);
  return 0;
}