#include "arbitro.h"

int main(int argc, char* argv[]){
  if(argc != 5){
    printf("Erro na leitura de parametros\n");
    exit(1);
  }
  int durCampeonato = 0;
  int tempoEspera = 0;
  int option;
  while((option = getopt(argc, argv, "d:t:")) != -1){
    switch(option){
      case 'd':
        printf("\n Tempo do campeonato e %s\n", optarg);
        durCampeonato = atoi(optarg);
        break;
      case 't':
        printf("\n Tempo de espera e %s\n", optarg);
        tempoEspera = atoi(optarg);
        break;
      default:
        printf("\nOpcao invalida\n");
        exit(EXIT_FAILURE);
      }
    }

}
