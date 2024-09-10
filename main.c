#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

printf("Seja bem vindo ao jogo de adivinhação!");
  int segundos = time(0);
  srand(segundos);

  int numero = rand();
  int numeroSecreto = numero % 100;
  int chute;
  int ganhou = 0;
  int tentativas = 1;


  while(ganhou == 0){
    printf("Tentativa %d\n", tentativas);
    printf("Digite seu chute: ");
    scanf("%d", &chute);
    printf("Seu chute foi %d\n", chute);

    int acertou = (chute == numeroSecreto);
    int maior = chute > numeroSecreto;

    if(acertou){
      printf("Parabéns, você acertou!\n");
    ganhou = 1;
    }
    else if (maior) {
      printf("Seu chute foi maior\n");
    }
    else{
      printf("Seu chute foi menor\n");
    }
    tentativas++; 
  }
  
  
  return 0;
}