//Neste projeto tive ajuda de um aluno(Leonardo) e do monitor Igor Silva!

//Projeto de levantamento de preços de uma empresa aerea

//Bibliotecas
#include <stdio.h>//Biblioteca de comandos de entrada e saída
#include <stdlib.h>//Biblioteca de comandos gerais
#include <locale.h>//Biblioteca de acentuação
#include <string.h>//Biblioteca que permite manipular string
#include <ctype.h>//Biblioteca de manipular caractere

//Definir cores com seus respectivos códigos 
#define RED "\x1b[91m"//Cor vermelha
#define GREEN "\x1b[32m"//Cor verde
#define BLUE "\x1b[34m"//Cor azul
#define RESET "\x1b[0m"//Resetar cores

//Declaração de funções utilizadas no programa
void preencheVetor(int,char[]);//Função para preencher vetor
void mostraStatus(int,char[]);//Função de mostrar status
void preencherLugar(int,char[]);//Função de preencher lugar
void cancelarReserva(int,char[]);//Função de cancelar reserva
int efetivarCompra(int ,char[]);//Função efetivar compra
void relatorio(int,char[]);//Função relatório

//Função principal
int main(void) {

//Declaração das variáveis	
char destino[40], assentos[200];//Variáveis do tipo caractere
int quantidadeAssento, numero, lugar, idade, valorPassagem, novaPassagem, valorTotal;//Variáveis do tipo inteiro

valorTotal = 0;
novaPassagem = 0;
quantidadeAssento = 0;
valorPassagem = 0;

//Começo do código
    system("color F");
    setlocale(LC_ALL, "Portuguese");

//Printf comando de saída, ou seja, algo estará escrito na tela
                        printf(" ______________________________________________________________________________________________________________________\n");
                        printf("|                                                                                                                      |\n");
                        printf("|                                         Bem vindo à SALUMAR LINHAS AEREAS!!!                                         |\n");
                        printf("|                      Digite as informações abaixo para fazermos as verificações necessárias.                         |\n");
                        printf("|                                                                                                                      |\n");
                        printf("|______________________________________________________________________________________________________________________|\n\n");

//Comando de repetição do While, onde ele executa uma vez e depois verifica a condição
        do
        {
	                    printf("Informe o destino escolhido por nossos clientes: ");//Escreve algo na tela
                        fflush(stdin);	//Limpa o buffet do teclado
	                    gets(destino); //Recebe dados do tipo string 
	
	        if(strcmp(destino,"")==0) //Comando se, condição
	                    printf("Esse destino não existe em nosso sistema, tente novamente!\n ");
	
	        else //Comnado então, condição
	                    printf("Seus dados estão corretos! Prossiga com a operação.\n\n"); 
	
        }while(strcmp(destino,"")==0);//Comparar se não é um nome nulo


//Segundo do While
        do
        {
        	            printf("Informe quantos assentos estão dísponiveis para o voo em questão: ");
        	            fflush(stdin);
        	            scanf("%i", &quantidadeAssento);//Ler dados 
        	
        	if((quantidadeAssento < 90) || (quantidadeAssento >= 200))
        	            printf("Neste voo não e permitido esse quantitativo de assentos, por favor enforme novamente a quantidade.\n");
        	
            else       	
        	            printf("A informação está correta! Prossiga com a operação.\n\n");  
        	
		}while((quantidadeAssento < 90) || (quantidadeAssento >= 200));


//Terceiro do While			 
       do
       {
       	    
       	                printf("Informe o valor da passagem em reais: ");
       	                fflush(stdin);
			            scanf("%i", &valorPassagem);  
			
			if(valorPassagem == 0)    
			            printf("Valor da passagem está invalido! Tente novamente.\n ");
			
			else
			            printf("A informação está correta! Prossiga com a operação.\n\n");			      
       	
	   }while(valorPassagem == 0);

//Informações a serem exibidas na tela logo em seguida	   
	                    printf(" ______________________________________________________________________________________________\n");
	                    printf("|                                                                                              |\n");
	                    printf("|   Logo abaixo terá um menu onde a empresa poderá selecionar a opção que melhor satisfazela,  |\n");
                        printf("|   para ativar a opção desejada, digite o número o qual a opção está indicada.                |\n");  
                        printf("|______________________________________________________________________________________________|\n\n");


//Caso o valor informado seja 7, fecha o programa
preencheVetor(quantidadeAssento, assentos);
            while (numero != 7)
		{ 
		
                        printf("\n\n");
                        printf(" _______________________________________________________________\n"); 
						printf("|                                                               |\n");
						printf("|              Selecione uma opção abaixo:                      |\n");       
                        printf("|                                                               |\n");
                        printf("|             1 - Efetuar reserva.                              |\n");
                        printf("|             2 - Confirmar uma reserva.                        |\n");
                        printf("|             3 - Cancelar uma reserva.                         |\n");
                        printf("|             4 - Verificar ocupação de um voo.                 |\n");
                        printf("|             5 - Relatório de vendas.                          |\n");
                        printf("|             7 - Sair do programa                              |\n");
                        printf("|                                                               |\n");
                        printf("|_______________________________________________________________|");

                       
                        printf("\n\nQual opção deseja executar: ");
                        fflush(stdin);
                        scanf("%i", &numero);


//Switch Case inicio, comando condicional
            switch(numero)
			{
            	
//Opção 1 do switch            	
                    case 1: 
                    
                system("cls");     
                    
                        printf(" _______________________________________________________________\n"); 
						printf("|                                                               |\n");
                        printf("|                 Mapa de calor do avião abaixo:                |\n");
                        printf("|                                                               |\n");
                        printf("|_______________________________________________________________|\n\n");
                        
                        mostraStatus(quantidadeAssento,assentos);//Função de preencher os assentos
                        printf("\n\nDigite a poltrona que o senhor(a), deseja reservar:");
                        fflush(stdin);
                        scanf("%i",&lugar);
                            preencherLugar(lugar,assentos);
                        
                        printf("\n\nLogo abaixo, será solicitado a idade, caso seja menor que 5 anos, a pssagem tem desconto de 50 por cento.\n");
                        
                        printf("Informe sua idade: ");  
                        fflush(stdin);
                        scanf("%i", &idade);
                        
                        if (idade <= 5)
                        {
							novaPassagem = (valorPassagem / 2);
							printf("O valor a ser cobrado com desconto é de R$ %i,00. \n\n", novaPassagem);  
                        }
                        
                        else if (idade > 5){
                            printf("O preço da passagem a ser pago é de R$ %i,00. \n\n", valorPassagem);}                       
                    break;
                    
				
//Opção 2 do switch    
                    case 2:
                    	
                    system("cls");	
                    	
                    	printf(" _______________________________________________________________\n"); 
						printf("|                                                               |\n");
                        printf("|                 Confirmação de reserva:                       |\n");
                        printf("|                                                               |\n");
                        printf("|_______________________________________________________________|\n\n");
                    	
                    	
                        printf("Informe o numero da reserva do sehnhor(a) para confirmamos a passagem:");
                        fflush(stdin);
                        scanf("%i",&lugar);
                        
                        lugar = efetivarCompra(lugar, assentos);//Função para a confirmação de lugares 
                            
                        if(lugar == 1) 
                            printf("Compra realizada com sucesso!");
                            
                        else if(lugar == 5)
                            printf("Lugar já foi comprado");
          
                        else
                            printf("Este lugar esta sem reserva ou já foi comprado. Faça sua reserva primeiro!");        
                    break;

                
//Opção 3 do switch                
                    case 3:
                    	
                system("cls");    	
                    	
                    	printf(" _______________________________________________________________\n"); 
						printf("|                                                               |\n");
                        printf("|                 Mapa de calor do avião abaixo:                |\n");
                        printf("|                                                               |\n");
                        printf("|_______________________________________________________________|\n\n");
                    	
                    	
                        mostraStatus(quantidadeAssento,assentos);
                        printf("\n\nInforme a poltrona que o senhor(a), deseja cancelar:");
                        fflush(stdin);
                        scanf("%i",&lugar);
                        
                        cancelarReserva(lugar,assentos);//Função para o cancelamento de assentos já reservados 
                    break;
                
                
//Opção 4 do switch                
                    case 4:
                    	
                system("cls");    	
                    	
                    	printf(" _______________________________________________________________\n"); 
						printf("|                                                               |\n");
                        printf("|                 Mapa de calor do avião abaixo:                |\n");
                        printf("|                                                               |\n");
                        printf("|_______________________________________________________________|\n\n");
                    	
                    	
                       mostraStatus(quantidadeAssento,assentos);
                    break;

                
//Opção 5 do switch                
                    case 5:
                    	
                system("cls");
                    	
                        relatorio(quantidadeAssento,assentos);//Função de relatório
                    break;
    }
          
}

  return 0;
}


//Função de preencher um vetor
void preencheVetor (int quantidadeAssento,char assentos[200])
{
	int i;
  for( i = 0; i < quantidadeAssento; i++)
    assentos[i] = 'D';

}


//Função de mostrar status
void mostraStatus (int quantidadeAssento,char assentos[200])
{
	int i;
  for(i = 0; i < quantidadeAssento; i++){
    printf("[%i] = %c",i+1,assentos[i]);
 
//Mudança de cor no sistema 
   
    if (assentos[i] == 'R')
    printf(RED"[%i] = %c"RESET, i+1, assentos[i]);
    
    else if (assentos[i] == 'C')
    printf(BLUE"[%i] = %c"RESET, i+1, assentos[i]);
    
}
}


//Função de preencher lugares
void preencherLugar (int lugar,char assentos[200])
{
  assentos[lugar-1] = 'R';
}


//Função para cancelar reservas
void cancelarReserva (int lugar,char assentos[200])
{
   assentos[lugar-1] = 'D';
}


//Função para efetivar compra
int efetivarCompra (int lugar,char assentos[200])
{
  if (assentos[lugar-1] == 'R')
  {
   assentos[lugar-1] = 'C';
   return 1;
  }
  
   else if (assentos[lugar-1]=='C')
    return 5;
    
    else 
      return -1;
}


//Função do relatório
void relatorio (int quantidadeAssento,char assentos[200])
{
  int livres = 0, comprados = 0, reservados = 0;
  int i;
  int valorTotal = 0;
 
  
  for (i = 0; i < quantidadeAssento;i++)
  {
    if (assentos[i] == 'R')
        reservados++;
        
      else if( assentos[i] == 'D')
        livres++;
        
      else
        comprados++;
      
  }
  
                      	printf(" _______________________________________________________________\n"); 
						printf("|                                                               |\n");
                        printf("|                 Relatório da viagem abaixo:                   |\n");
                        printf("|                                                               |\n");
                        printf("|_______________________________________________________________|\n\n");
  
  
                        printf("Assentos livres: %i. ",livres);
                        printf("\nAssentos comprados: %i. ", comprados);
                        printf("\nAssentos reservados: %i. ", reservados); 

}
