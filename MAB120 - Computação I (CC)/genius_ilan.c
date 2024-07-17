/*
Autor: Ilan Araujo
Data: 15 de junho de 2018
Programa: Jogo inspirado no Genius, lançado pela Estrela na década de 80
*/

#include<stdio.h>
#include<time.h> //Biblioteca que possui a função time_t
#include<stdlib.h> //Biblioteca que possui as funções rand, srand e system("clear")
#include<unistd.h> //Biblioteca que possui a função sleep

int sequencia[32], respostas[32];

/* Função que imprime o painel sem nenhuma seção piscando */
void normal() {
   printf("\n\n\n");
   printf("      * * * * * * * * * * * * *\n");
   printf("      *           *           *\n");
   printf("      *   4 4 4   *   1 1 1   *\n");
   printf("      *   4 4 4   *   1 1 1   *\n");
   printf("      *   4 4 4   *   1 1 1   *\n");
   printf("      *           *           *\n");
   printf("      * * * * * * * * * * * * *\n");
   printf("      *           *           *\n");
   printf("      *   3 3 3   *   2 2 2   *\n");
   printf("      *   3 3 3   *   2 2 2   *\n");
   printf("      *   3 3 3   *   2 2 2   *\n");
   printf("      *           *           *\n");
   printf("      * * * * * * * * * * * * *\n");
   sleep(1);
   system("clear");
}

/* Função que imprime o painel com a seção 1 piscando */
void pisca1() {
   normal();
   printf("\n\n\n");
   printf("      * * * * * * * * * * * * *\n");
   printf("      *           * * * * * * *\n");
   printf("      *   4 4 4   * * 1 1 1 * *\n");
   printf("      *   4 4 4   * * 1 1 1 * *\n");
   printf("      *   4 4 4   * * 1 1 1 * *\n");
   printf("      *           * * * * * * *\n");
   printf("      * * * * * * * * * * * * *\n");
   printf("      *           *           *\n");
   printf("      *   3 3 3   *   2 2 2   *\n");
   printf("      *   3 3 3   *   2 2 2   *\n");
   printf("      *   3 3 3   *   2 2 2   *\n");
   printf("      *           *           *\n");
   printf("      * * * * * * * * * * * * *\n");
   sleep(1);
   system("clear");
}

/* Função que imprime o painel com a seção 2 piscando */
void pisca2() {
   normal();
   printf("\n\n\n");
   printf("      * * * * * * * * * * * * *\n");
   printf("      *           *           *\n");
   printf("      *   4 4 4   *   1 1 1   *\n");
   printf("      *   4 4 4   *   1 1 1   *\n");
   printf("      *   4 4 4   *   1 1 1   *\n");
   printf("      *           *           *\n");
   printf("      * * * * * * * * * * * * *\n");
   printf("      *           * * * * * * *\n");
   printf("      *   3 3 3   * * 2 2 2 * *\n");
   printf("      *   3 3 3   * * 2 2 2 * *\n");
   printf("      *   3 3 3   * * 2 2 2 * *\n");
   printf("      *           * * * * * * *\n");
   printf("      * * * * * * * * * * * * *\n");
   sleep(1);
   system("clear");
}

/* Função que imprime o painel com a seção 3 piscando */
void pisca3() {
   normal();
   printf("\n\n\n");
   printf("      * * * * * * * * * * * * *\n");
   printf("      *           *           *\n");
   printf("      *   4 4 4   *   1 1 1   *\n");
   printf("      *   4 4 4   *   1 1 1   *\n");
   printf("      *   4 4 4   *   1 1 1   *\n");
   printf("      *           *           *\n");
   printf("      * * * * * * * * * * * * *\n");
   printf("      * * * * * * *           *\n");
   printf("      * * 3 3 3 * *   2 2 2   *\n");
   printf("      * * 3 3 3 * *   2 2 2   *\n");
   printf("      * * 3 3 3 * *   2 2 2   *\n");
   printf("      * * * * * * *           *\n");
   printf("      * * * * * * * * * * * * *\n");
   sleep(1);
   system("clear");
}

/* Função que imprime o painel com a seção 4 piscando */
void pisca4() {
   normal();
   printf("\n\n\n");
   printf("      * * * * * * * * * * * * *\n");
   printf("      * * * * * * *           *\n");
   printf("      * * 4 4 4 * *   1 1 1   *\n");
   printf("      * * 4 4 4 * *   1 1 1   *\n");
   printf("      * * 4 4 4 * *   1 1 1   *\n");
   printf("      * * * * * * *           *\n");
   printf("      * * * * * * * * * * * * *\n");
   printf("      *           *           *\n");
   printf("      *   3 3 3   *   2 2 2   *\n");
   printf("      *   3 3 3   *   2 2 2   *\n");
   printf("      *   3 3 3   *   2 2 2   *\n");
   printf("      *           *           *\n");
   printf("      * * * * * * * * * * * * *\n");
   sleep(1);
   system("clear");
}

/* Função que gera uma sequência aleatória de números */
void gera_sequencia (int tam_sequencia) {
   int aux; //Variável auxiliar que indica o índice do vetor
   time_t t; //Variável determinada em função do relógio do sistema
   srand((unsigned) time(&t)); //Semente da função rand que garante a aleatoriedade da sequência de números 
   for(aux = 0;aux < tam_sequencia; aux++) {
      sequencia[aux] = rand() % 4;
      sequencia[aux]++; //Alteração que faz os valores do vetor irem de 1 a 4, ao invés de irem de 0 a 3
   }
}


/* Função que roda o jogo */
int jogo(int tam_sequencia, int erro) {
   int aux1, aux2;
   system("clear");
   sleep(1);
   gera_sequencia(tam_sequencia); //Inicia a função que gera a sequência de números
   for(aux1 = 0; aux1 < tam_sequencia; aux1++) { //Imprime na tela o painel com o número correspondente piscando
      system("clear");
      for(aux2 = 0; aux2 <= aux1; aux2++) {
         switch(sequencia[aux2]) { //Pisca a seção equivalente ao número da sequência piscando
            case 1:
               pisca1();
               break;
            case 2:
               pisca2();
               break;
            case 3:
               pisca3();
               break;
            case 4:
               pisca4();
               break;
         }
         normal();
      }
      printf("Insira os numeros que piscaram na tela, separados por espaco:\n");
      for(aux2 = 0; aux2 <= aux1; aux2++) { //Armazena e confere as respostas do jogador
         scanf("%d", &respostas[aux2]);
         if(respostas[aux2] != sequencia[aux2]) { //Se inicia caso o jogador erre
            printf("Voce errou.\n");
            sleep(1.5);
            system("clear");
            erro = erro - 1;
            return erro;
         }
      }
   }
   system("clear");
   return erro;
}


/* Função principal */
int main() {
   int erro = 1; //Variável que armazena o número de tentativas com erro, sendo 1 o seu valor padrão
   int tam_sequencia = 16; //Variável referente à extensão da sequência de cores, sendo 16 seu valor padrão
   int resposta; //Variável que guarda a resposta do jogador quando perguntado se deseja alterar os padrões do jogo
   tam_sequencia = 16; //Extensão padrão da sequência de cores
   system("clear");
   printf("Deseja alterar os padroes do jogo? (0 = nao, 1 = sim)\n");
   scanf("%d", &resposta); //Aqui o jogador pode alterar os números padrões do jogo
   while(resposta != 0 && resposta != 1) { //Será iniciado caso o jogador digite algo diferente de 0 e 1
      printf("Resposta invalida, digite de novo. (0 = nao,1 = sim)\n");
      scanf("%d", &resposta);
   }
   if(resposta == 1) { //Será iniciado se o jogador desejar alterar os números padrões
      printf("Numero de tentativas apos errar uma vez: ");
      scanf("%d", &erro); //Novo número de tentativas com erro
      while(erro < 0) { //Será iniciado se o jogador inserir um número inválido
         printf("Insira um numero maior ou igual a zero: ");
         scanf("%d", &erro); 
      }
      printf("Extensao da sequencia (limite = 32): ");
      scanf("%d", &tam_sequencia); //Nova extensão da sequência de números
      while(tam_sequencia > 32 || tam_sequencia <= 0) { //Será iniciado se o jogador inserir um número inválido
         printf("Insira um numero maior que 0 e menor que 32: ");
         scanf("%d", &tam_sequencia);
      }
   }
   while(erro >= 0) { //Inicia o jogo apenas se o limite de erros não for atingido
      erro = jogo(tam_sequencia, erro); //Inicia o jogo
   }
   if(erro >= 0) { //O jogador acertou toda a sequência sem ultrapassar o limite de erros
      printf("Parabens, voce ganhou!\n");
   }
   else { //O jogador ultrapassou o limite de erros
      printf("Voce perdeu.\n");
   }
   return 0;
}
