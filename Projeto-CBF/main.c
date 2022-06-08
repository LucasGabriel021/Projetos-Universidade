/*
 - Nome Aluno: Lucas Gabriel Gomes de Oliveira.
 - Matrícula Aluno: UC21103713
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//void verificar_cidade();
void verificar_id_jogo();
void verificar_valor_total();

#define MAX_JOGOS 450
#define TAM_CIDADE 120

int main(void) {
     system("color F");
     setlocale(LC_ALL, "Portuguese");

     int opcao_menu = 0, id_jogo = 0;
     char res, cidade[TAM_CIDADE];
     float valor_total = 0;
     
     do{  
          printf("Menu de Funcionalidades\n");
          printf("Nas opções abaixo escolha o número que satisfaz suas necessidades:\n");
          printf("[1] - Cadastrar as informações do jogo\n");
          printf("[2] - Verificar as informações do jogo\n");
          printf("[3] - Verificar as informações do jogo em determinada cidade\n");
          printf("[4] - Encerrar o programa!\n");
          
          printf("\nInforme a opção desejada:");
          fflush(stdin);
          scanf("%d", &opcao_menu);
          switch(opcao_menu) {
               case 1:
                    system("cls");
                    
                    printf("\n");
                    printf("Opção 1\n");
                    
                    printf("Informe o número do jogo: ");
                    fflush(stdin);
                    scanf("%d", &id_jogo);
                    verificar_id_jogo(&id_jogo);
                    
                    printf("O ID do jogo informado é: %d", id_jogo);
                    printf("\n\n");
                    
                    
                    printf("Informe o valor arrecadado na partida: ");
                    fflush(stdin);
                    scanf("%f", &valor_total);
                    verificar_valor_total(&valor_total);
                    
                    printf("O valor arrecadado foi de: R$: %.2f", valor_total);
                    printf("\n\n");
                    
                    
                    /*
                    printf("Informe a cidade onde foi realizado o jogo: ");
                    fflush(stdin);
                    fgets(cidade, 25, stdin);
                    verificar_cidade(&cidade);
                    
                    printf("O nome informado da cidade é: %s", cidade);
                    printf("\n\n");
                    */
                    break;
                    
               case 2:
                    system("cls");
                    
                    printf("\n");
                    printf("Opção 2");
                    break;
                    
               case 3:
                    system("cls");
                    
                    printf("\n");
                    printf("Opção 3");
                    break;
                    
               case 4:
                    system("cls");
                    
                    printf("\n");
                    printf("Opção 4");
                    res = 's';
                    break;
                         
          }
          
     }while(res != 's');
     
	return 0;
}

void verificar_id_jogo(int *id) {
     do {
          if(*id < 300) {
               printf("Identificador do número invalido, por favor, informe novamente!\n ");
               if(*id == *id) {
                    printf("Identificador repetido, por favor, insira outro identificador válido!\n ");
               }
          }
          else {
               printf("Informações inseridas corretamentes, prossiga as operações!\n ");
          }
     }while(*id < 300);
     
}


void verificar_valor_total(float *total) {
     do {
          if(*total < 1000 || *total > 1000000) {
               printf("O valor total informado não corresponde aos valores da casa, por favor, insira novamente! ");
          }
     }while(*total < 1000 || *total > 1000000);
}


/*
void verificar_cidade(char *cidade_x) {
     do {
          if(strcmp(*cidade_x, "") == 0) {
               printf("Nome invalido, por favor, insira novamente!\n");
          }
     }while(strcmp(*cidade_x, "") == 0);  
}
*/



