#include <stdio.h>

int main(void) {

  int topo[9] = {0};
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

   for (x=8, i=7;x>=0 && i>=0;x--, i--){

      res[x] = binario1[i] + binario2[i] + topo[x];

      if(res[x] == 1){

        res[x] = 1;
        topo[i] = 0;
      }

      if(res[x] == 2) {

        res[x] = 0;
        topo[i] = 1;
      }

      if(res[x] == 3){

        res[x] = 1;
        topo[i] = 1;

      }

    }
  
  printf("Soma dos números: %d%d%d%d%d%d%d%d%d\n", res[0], res[1], res[2], res[3], res[4], res[5], res[6], res[7], res[8]);

  printf("topo: %d%d%d%d%d%d%d%d%d\n", topo[0], topo[1], topo[2], topo[3], topo[4], topo[5], topo[6], topo[7], topo[8]);

  return 0;

  }