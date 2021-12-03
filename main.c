#include <stdio.h>

int main(void) {

  int binario1[8] = {0};
  int binario2[8] = {0};
  int res[9] = {0};
  int i, x;

  for (i=0;i<=7;i++){

  printf("Digite o primeiro numero: ");
  scanf("%d", &binario1[i]);
  
  }

  for (i=0;i<=7;i++){

  printf("Digite o segundo numero: ");
  scanf("%d", &binario2[i]);
  
  }

  printf("Numero digitado: %d%d%d%d%d%d%d%d\n", binario1[0], binario1[1], binario1[2], binario1[3], binario1[4], binario1[5], binario1[6], binario1[7]);

  printf("Numero digitado: %d%d%d%d%d%d%d%d\n", binario2[0], binario2[1], binario2[2], binario2[3], binario2[4], binario2[5], binario2[6], binario2[7]);

  for(i=7;i>=0;i--) {

    for (x=8;x>=1;x--){

      res[x] = binario1[i] + binario2[i];

    }

        if(res[x] >= 2 && res[x] < 4){

          res[x] = 0;
          res[i] = 1;

        }

    } 
  
  printf("Soma dos números: %d%d%d%d%d%d%d%d%d\n", res[0], res[1], res[2], res[3], res[4], res[5], res[6], res[7], res[8]);

  return 0;

  }