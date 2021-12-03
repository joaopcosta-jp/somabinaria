#include <stdio.h>

int main(void) {

  int topo[10] = {0};
  int binario1[9] = {0};
  int binario2[9] = {0};
  int res[10] = {0};
  int i, x;

  for (i=1;i<=8;i++){

  printf("Digite o primeiro número: ");
  scanf("%d", &binario1[i]);
  
  }

  for (i=1;i<=8;i++){

  printf("Digite o segundo número: ");
  scanf("%d", &binario2[i]);
  
  }

  printf("Primeiro número digitado: %d%d%d%d%d%d%d%d\n", binario1[1], binario1[2], binario1[3], binario1[4], binario1[5], binario1[6], binario1[7], binario1[8]);

  printf("Segundo número digitado: %d%d%d%d%d%d%d%d\n", binario2[1], binario2[2], binario2[3], binario2[4], binario2[5], binario2[6], binario2[7], binario2[8]);

   for (x=9, i=8;x>=0 && i>=0;x--, i--){

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
  
  printf("A soma dos números é: %d%d%d%d%d%d%d%d%d\n", res[1], res[2], res[3], res[4], res[5], res[6], res[7], res[8], res[9]);

  return 0;

  }