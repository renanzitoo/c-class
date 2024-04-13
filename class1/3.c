#include <stdio.h>
#include<locale.h>

int main() {
  setlocale(LC_ALL,"Portuguese");
  printf("Cadastro de clientes\n");
  printf("0 - Fim\n");
  printf("1 - Inclui\n");
  printf("2 - Altera\n");
  printf("3 - Exclui\n");
  printf("4 - Consulta\n");
  printf("\n");
  printf("Opção: ");
  return 0;
}