#include <stdio.h>

int main(void) {

  int binario0[9] = {0};
  int binario1[8] = {0};
  int binario2[8] = {0};
  int res[9] = {0};
  int i;

  for (i=0;i<=7;i++ ){

  printf("Digite o primeiro numero: ");
  scanf("%d", &binario1[i]);
  
  }

  for (i=0;i<=7;i++ ){

  printf("Digite o segundo numero: ");
  scanf("%d", &binario2[i]);
  
  }

  printf("Numero digitado: %d%d%d%d%d%d%d%d\n", binario1[0], binario1[1], binario1[2], binario1[3], binario1[4], binario1[5], binario1[6], binario1[7]);

  printf("Numero digitado: %d%d%d%d%d%d%d%d", binario2[0], binario2[1], binario2[2], binario2[3], binario2[4], binario2[5], binario2[6], binario2[7]);

  return 0;

}