#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  game();
}
int game(){
  int player, cpu, again;
  printf("Bem Vindo ao JokenPo!\n");
  printf("Você estará jogando contra o computador.\n");
  printf("Selecione sua opção:\n");
  printf("1 - Pedra\n");
  printf("2 - Papel\n");
  printf("3 - Tesoura\n");
  scanf("%d", &player);
  if(player < 1 || player > 3){
    game();
  }
  switch(player){
    case 1: printf("Você escolheu Pedra\n\n"); break;
    case 2: printf("Você escolheu Papel\n\n"); break;
    case 3: printf("Você escolheu Tesoura\n\n"); break;
  }
  srand(time(NULL));
  cpu = 1 + rand() % 3;
  switch(cpu){
    case 1: printf("Computador escolheu Pedra\n\n"); break;
    case 2: printf("Computador escolheu Papel\n\n"); break;
    case 3: printf("Computador escolheu Tesoura\n\n"); break;
  }
  if((player == 1 && cpu == 3 || player == 2 && cpu == 1 || player == 3 && cpu == 2)){
    printf("Você venceu!\n\n");
  }
  else if(player == cpu){
    printf("Empate!\n\n"); 
  }
  else{
    printf("CPU venceu!\n\n");
  }
  printf("Deseja jogar novamente?\n");
  printf("1 - Sim\n");
  printf("2 - Não\n");
  scanf("%d", &again);
  if(again == 1){
    game();
  }
  else{
    exit(0);
  }
  return 0;
}