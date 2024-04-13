#include <stdio.h>
int main() {
    double lado1, lado2, diagonal;
    printf("Digite o primeiro lado");
    scanf("%lf", &lado1);
    printf("Digite o segundo lado");
    scanf("%lf", &lado2);
    diagonal = (lado1 * lado1) + (lado2 * lado2);
    printf("A diagonal mede raiz de %.2lfcm", diagonal);
}