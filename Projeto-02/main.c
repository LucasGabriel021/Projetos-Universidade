/*
 - Nome Aluno: Lucas Gabriel Gomes de Oliveira.
 - Matrícula Aluno: UC21103713.
 
 - Nome Aluno: Marcos Rezende dos Santos
 - Matrícula Aluno: UC21106205.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

// Definição das constantes
#define MAX_JOGOS 450
#define TAM_CIDADE 120
#define MAX_PRE 50

// Declacarção das funções
int verificar_id_jogo();
float verificar_total_jogo();

int main(void) {
    
	system("color F");
     setlocale(LC_ALL, "Portuguese");
     int i = 0, opcao_menu = 0, contador = 0, tamanho_nom_pres = 0, tamanho_cidade = 0;
     char res, nome_presidente[MAX_PRE], cidade_veri[TAM_CIDADE];
     
     // Declacarção do struct principal
     struct Jogos {
	    int id_jogo;
	    char cidade[TAM_CIDADE];
	    float valor_total;
     };
     struct Jogos jogos_id[MAX_JOGOS];
     
     // Criar um ponteiro para armazenar dados do arquivo
     FILE *pont_arquivo;
     pont_arquivo = fopen("nomePresidente.txt", "a"); // O a permite adiconar elemetos ao arquivo sem sobrescrever
     
     if(pont_arquivo == NULL) {
          printf("Erro ao abrir o arquivo");
          return 1;
     }
     
     printf("Projeto 02\n");
     printf("Para dar ínicio ao programa, informe o nome do presidente!\n");
     printf("\n======================================Inserção do nome da Autoridade Máxima====================================\n");
     printf("\n\n");
                    
     do {
          fflush(stdin);
          printf("Informe o nome do presidente da Confederação de Futebol Brasileira(CBF): "); 
          fgets(nome_presidente, MAX_PRE, stdin);
          
          tamanho_nom_pres = strlen(nome_presidente);
          //printf("%d", tamanho_nom_pres);
          
          if(tamanho_nom_pres == 1) {
               printf("Nome invalido, tente novamente:\n");
          }
          else {
               printf("Informações inseridas corretamentes, prossiga as operações!\n");
               
               // For que coloca todas as letras em caixa baixa
               for(contador = 0; contador < tamanho_nom_pres; contador++){
                  nome_presidente[contador] = tolower(nome_presidente[contador]);
               }
     
               // For que coloca apenas as iniciais em caixa alta
               for(contador = 0; contador < tamanho_nom_pres; contador++) {
                    if(contador == 0 || nome_presidente[contador - 1] == ' ') {
                         nome_presidente[contador] = toupper(nome_presidente[contador]);
                    }
                    else {
                         nome_presidente[contador] = nome_presidente[contador];
                    }
               }
     
               // Salva o nome do presidente no arquivo e fecha o arquivo
               fprintf(pont_arquivo, "%s", nome_presidente);
               fclose(pont_arquivo);
               
               printf("Nome informado do Presidente: %s", nome_presidente); 
          }

     }while(tamanho_nom_pres == 1);
          
     printf("\n\n");
     system("pause");
     system("cls");

     // Menu de opções
     do{  
          printf("======================================Menu de Funcionalidades================================================\n\n");
          printf("Nas opções abaixo escolha o número que satisfaz suas necessidades:\n");
          printf("[1] - Cadastrar as informações do jogo\n");
          printf("[2] - Verificar as informações do jogo\n");
          printf("[3] - Consultar jogos em determinada cidade\n");
          printf("[4] - Encerrar o programa!\n");
          printf("\n=============================================================================================================\n\n");
          
          printf("\nInforme a opção desejada: ");
          fflush(stdin);
          scanf("%d", &opcao_menu);
          switch(opcao_menu) {
               
               case 1:
                    system("cls");
                    printf("Inserção dos Dados no Sistema\n\n");
                
                    // Executa em cada item do struct a função de acordo com que o vetor é incrementado
                    jogos_id[i].id_jogo = verificar_id_jogo();
                    printf("\n");
                    jogos_id[i].valor_total = verificar_total_jogo();
                    
                    do {
                         fflush(stdin);
                         printf("\nInforme o nome da cidade onde foi realizado o jogo: ");
                         fgets(jogos_id[i].cidade, TAM_CIDADE, stdin);
                         
                         tamanho_cidade = strlen(jogos_id[i].cidade);
                         
                         if(tamanho_cidade == 1) {
                              printf("Nome da cidade esta incorreto, por favor, informe novamente: \n");
                         }
                         else {
                              printf("Informações inseridas corretamentes, prossiga as operações!\n ");
                         }
                    }while(tamanho_cidade == 1);
                    
                    // Fazer a verificação do contador aqui(Ver com o monitor)
                    i++;
                    
                    printf("\n\n");
                    break;
                    
               case 2:
                    system("cls");
                    printf("Apresentação dos Dados\n\n");
                    
                    // Exibição dos dados em formato de tabela
                    printf("Nome do Presidente:\n");
                    printf("%s\n", nome_presidente);
                    
                    for(contador = 0; contador < i; contador++) {
                         printf("Nome da Cidade: \n%s", jogos_id[contador].cidade);
                         printf("O ID do jogo: \t Quantia Ganha: \n%d \t\t R$: %.2f", jogos_id[contador].id_jogo, jogos_id[contador].valor_total);
                         printf("\n\n");
                    }
                      
                    printf("\n\n"); 
                    break;
                    
               case 3:
                    system("cls");
                    printf("Pesquisa de jogos por uma cidade\n\n");
                    
                    fflush(stdin);
                    printf("Informe o nome da cidade que foi realizado o jogo: ");
                    fgets(cidade_veri, TAM_CIDADE, stdin);
                    
                    // Fazer a verificação das ciddaes(Ver com o monitor)
                    for(contador = 0; contador < MAX_JOGOS; contador++) {
                         if(cidade_veri == jogos_id[contador].cidade) {
                              printf("Nome da cidade: %s", jogos_id[contador].cidade);
                              printf("\n\n");
                         }
                         else {
                              printf("\nNão ocorreu jogo na cidade!\n\n");
                              break;
                         }
                    }   
                    break;
                    
               case 4:
                    res = 's';
                    break;   
                            
          }
          
     // Caso a resposta seja sim, ele encerra o programa     
     }while(res != 's');
     
	return 0;
}

// Código que a função irá executar
int verificar_id_jogo() {
	int id = 0;
	
     do {
     	fflush(stdin);
		printf("Informe o número do jogo: ");		
		scanf("%d", &id);
		
          if(id < 300 || id > 10000) {
               printf("Identificador do número invalido, por favor, informe novamente: ");
          }
          else {
               printf("Informações inseridas corretamentes, prossiga as operações!\n ");
          }
           
          
     }while(id < 300 || id > 10000);
     
     return id;
     
}

// Código que a função irá executar
float verificar_total_jogo() {
     float total = 0;
     
     do {
     	fflush(stdin);
		printf("Informe o total de arrecadação do jogo: ");		
		scanf("%f", &total);
		
          if(total< 1000 || total > 1000000) {
               printf("Total de arrecadação do jogo invalido, por favor, informe novamente: ");
          }
          else {
               printf("Informações inseridas corretamentes, prossiga as operações!\n ");
          }
           
          
     }while(total< 1000 || total > 1000000);
     
     return total;
}
