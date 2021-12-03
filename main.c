#include <stdio.h>

int main(void) {

//=================================VARIÁVEIS==========================================
  int topo[10] = {0};
  int binario1[9] = {0};
  int binario2[9] = {0};
  int res[10] = {0};
  int i, x;
//====================================================================================

  for (i=1;i<=8;i++) //Obtem o primeiro número binario digito por digito (total 8 digitos) e coloca no vetor binario1.
  {
  printf("Digite o primeiro número: ");
  scanf("%d", &binario1[i]);
  }

  for (i=1;i<=8;i++)//Obtem o segundo número binario digito por digito (total 8 digitos) e coloca no vetor binario2.
  {
  printf("Digite o segundo número: ");
  scanf("%d", &binario2[i]);
  }

  printf("\nPrimeiro número digitado: %d%d%d%d%d%d%d%d\n", binario1[1], binario1[2], binario1[3], binario1[4], binario1[5], binario1[6], binario1[7], binario1[8]);
  //Exibe o primeiro número binario a ser somado.

  printf("\nSegundo número digitado: %d%d%d%d%d%d%d%d\n", binario2[1], binario2[2], binario2[3], binario2[4], binario2[5], binario2[6], binario2[7], binario2[8]);
  //Exibe o segundo número binario a ser somado.

   for (x=9, i=8;x>=0 && i>=0;x--, i--)
   //Pega os vetores binario1 e binario2 junto com o vetor topo, soma todos e com o uso dos ifs verifica se há pares de um.

   {
      res[x] = binario1[i] + binario2[i] + topo[x];

      if(res[x] == 1)//Se a soma dos valores for 1, o res[x] recebe esse 1 e o topo[i]não recebe nada.
      {
        res[x] = 1;
        topo[i] = 0;
      }

      if(res[x] == 2)//Se a soma dos valores for 2(par de 1), o res[x] não recebe nada e o topo[i] recebe o valor 1.
      {
        res[x] = 0;
        topo[i] = 1;
      }

      if(res[x] == 3)//Se a soma dos valores for 3(formando um par de 1 e sobrando outro 1), tanto o res[x] quanto topo[i] recebem o valor 1.
      {
        res[x] = 1;
        topo[i] = 1;
      }
    }
  
  printf("\nA soma dos números é: %d%d%d%d%d%d%d%d%d\n", res[1], res[2], res[3], res[4], res[5], res[6], res[7], res[8], res[9]);
  //Exibe o resultado da soma.

  return 0;
  
  }