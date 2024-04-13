]#include <stdio.h>
int main(){
  double nota1, nota2, nota3, media;
  printf("Digite a primeira nota\n");
  scanf("%lf", &nota1);
  printf("Digite a segunda nota\n");
  scanf("%lf", &nota2);
  printf("Digite a terceira nota\n");
  scanf("%lf", &nota3);
  media = ((nota1 * 1) + (nota2 * 2) + (nota3 * 3))/6; 
  printf("A média é: %.2lf", media);
}