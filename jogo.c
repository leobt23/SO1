#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void print_usage(){
  printf("\nRegras:\n\tO computador gera um nr aleatorio e o utilizador tem que adivinhar se esse numero e par ou impar\n\tPara sair do jogo, escolher -1\nPontuacao:\n\t1 ponto por cada valor acertado\n\n");
}

int main(){
  int num, num_rand = 0;
  int pontuacao = 0;
  int nrTentativas = 0;
  time_t t;
  srand((unsigned) time(&t));
  print_usage();
  while(num!= -1){
    do{
        printf("Par(0) ou Impar(1)?\n");
        scanf("%d", &num);
        if(num == -1){
          printf("Pontuacao conseguida: %d em %d tentativas\nAte a proxima :)\n", pontuacao, nrTentativas);
          exit(1);
        }
    } while(num != 1 && num != 0);
        num_rand = rand()%10;
        printf("Numero aleatorio %d\n", num_rand);

        if((num_rand % 2) == (num % 2) ){
            printf("Certo!!\n\n");
            pontuacao++;
          }
        else
        printf("Errou :(\n\n");
        nrTentativas++;
  }

  return 0;
}
