//Projeto de identificação dos clientes de um cinema em Brasília

//Bibliotecas logo abaixo:
#include <stdio.h>  //comandos de entrada e saída. Exenplo usado: printf e scanf 
#include <stdlib.h>  //funções de uso geral uso do system("pause") por exemplo
#include <string.h>  //manipula strings. Exemplo usado no código: compara duas strings
#include <locale.h> //biblioteca que permite acentuar palavras

//Função principal abaixo:
int main(){
	
//Declaração das variáveis abaixo: A escolha do nome das variáveis foi escolhidas de acordo com que fique com um melhor entendimento para quem irá ler e para o próprio programador para que ele nao se perca nos diversos comandos abaixo.
int sessao, total_expectadores, i, idade, quantidadeM = 0, quantidadeF = 0, crianca = 0, adolescente = 0, adulto = 0, idoso = 0, maioridadeM, maioridadeF, lucro; //Variáveis do tipo inteiro %d
char sexo, filme[77]; //Variáveis do tipo caractere %s
	
//Entrada e saída dos dados abaixo:

//Comandos adicionais    
	setlocale(LC_ALL, "Portuguese"); //Permite acentuar as palavras.
    system("color A"); //Mudar de cor as palavras na hora da execução.
    
    
//Informações adicionais na tela. Saída de informações  
             printf("|--------------------------------------------------------------------------------------->|\n");
             printf("->Bem vindo ao cinema de Brásilia!!\n");
             printf("\n->Aqui a mágica acontece!!");  
			 printf("\n->Hoje os ingressos estão por meia entrada, hoje qualquer pessoa paga apenas R$ 7,00\n");
			 printf("\n->Hoje o combo com pipoca e refrigerante é por apenas R$ 21,00\n");
             printf("|--------------------------------------------------------------------------------------->|\n\n");
             printf("\n-Insira abaixo os dados dos clientes e as sessões disponiveis.");


//Quantidade de sessões disponíveis no cinema. Uso de comando de saída, entrada, repetição e condicional   
             printf("\n\n->Informe quantas sessões foram utilizadas:\n");  
    do{ //Comando de repetição do e while, realiza os comandos e depois testa a condição
    	     fflush(stdin); //Limpar o buffer do teclado 
    	     scanf("%d", &sessao); 

       if(sessao != 2){   //Condição        
    	     printf("<-----Não foi encontrado registros no nosso servidor a quantidade informada, insira novamente os dados.----->\n");}		
      }
    while(sessao != 2);	//Condição
   
   
//Informações do filme. Uso de comando de saída, entrada, repetição e condicional
            printf("\n->Informe o nome do filme assistido:\n");
    do{	//Comando de repetição
            fflush(stdin); 
            gets(filme); 
            
       if(strcmp(filme,"")==0){ //Compara se tem campos vazios. 
            printf("<-----Nome invalido, tente novamente.----->\n");}   
      }
    while(strcmp(filme,"")==0); //Condição
    
    
//Quantidade de pessoas que assistiram o filme. Uso de comando de saída, entrada, repetição e condicional     
            printf("\n->Quantidade de pessoas que assistiram o filme:\n");
    do{  //Comando de repetição do e while, realiza os comandos e depois testa a condição
            fflush(stdin); 
	        scanf("%d", &total_expectadores);
			 
       if(total_expectadores < 10) //Condição
			printf("\n<-----Número de expectadores negado! Tente novamente!----->\n");          
      }
    while(total_expectadores < 10); //Condição
    
    
//Inforamar abaixo o sexo do indíviduo e incrementos. Uso de comando de saída, entrada, repetição e condicional 
    for(i = 1; i <= total_expectadores; i++){ 
    	do{ //Comando de repetição do e while, realiza os comandos e depois testa a condição
            printf("\n->Informe o sexo do cliente. M para homem, F para mulher:");
            fflush(stdin); //Limpar o buffer do teclado
            scanf("%s", &sexo);
       
	   if(sexo != 'M' && sexo != 'F')  //Condição  
            printf("<-----Formato invalido!----->");
	      }  
	while(sexo != 'M' && sexo != 'F'); //Condição
	

//Entrada dos dados da idade das pessoas. Uso de comando de saída, entrada, repetição e condicional  
    do{ //Comando de repetição do e while, realiza os comandos e depois testa a condição
    	   printf("Informe a idade do cliente para fazermos as verificações da faixa etária do cinema:");
    	   fflush(stdin); 
    	   scanf("%d", &idade);
    	
       if(idade<3 || idade>100) //Condição
           printf("<-----Formato incorreto, tente novamente:----->");
	}
    while(idade<3 || idade>100); //Comando de repetição
    

//Verificação de quantos homens ou mulheres são de maiores e icrementos.
        if(sexo == 'M'){ //Condição
        	  quantidadeM++; //incremento
		}    
        else{ //Condição 2
        	  quantidadeF++; //incremento
		}
		
		if(sexo == 'M'){ //Condição
			
			maioridadeM++; //incremento
		}
		else{ //Condição 2
			maioridadeF++; //incremento	
		}

 
 //Diferenciação da faixa etária das pessoas no cinema e incrementos.  
        if(idade >= 3 && idade <= 13){
		      crianca++;} //incremento
			  
		else if(idade >= 14 && idade <= 17){ //Condição
              adolescente++;}  //incremento
			    
        else if(idade >= 18 && idade <= 64){ //Condição
              adulto++;} //incremento
			  
		else if(idade >= 65 && idade <= 100){ //Condição
		      idoso++;}	 //incremento 
    }
    
    
//Lucro do cinema

              lucro = (total_expectadores * 7);    
    
//Pula linha		   	   
    printf("\n\n");
    
//Limpa a tela
	system("cls");
	
//Informações na tela 2, uso de comandos de saída

	          printf("Informações na tela da faixa etária frequentadora e o nome do filme!!\n");
	          
	          printf("|--------------------------------------------------------------------------------------->|\n");
              printf("\nO nome do filme assistido nas sessões foi %s.\n", filme);	
	          
	          printf("\n#Qunatidade de pessoas do sexo masculino: %d", quantidadeM);
	          printf("\n#Quantidade de pessoas do sexo feminino: %d", quantidadeF);
	          printf("\n\n#Quantidade de crianças: %d\n", crianca);
	          printf("\n#Quantidade de adolescente: %d\n", adolescente);
	          printf("\n#Quantidade de adultos: %d\n", adulto);
	          printf("\n#Quantidade de idosos: %d\n\n", idoso);
              printf("|--------------------------------------------------------------------------------------->|\n");


//Pula linha		   	   
    printf("\n\n\n\n\n\n\n");
    printf("LOADING...\n\n");

//Pause doo programa
    system("pause");
    
//Limpa a tela
	system("cls");
	
//Informações na tela 3, uso de comandos de saída
	          printf("-->Diferença do sexo em nossas sessões:\n\n");
	          
	          printf("|--------------------------------------------------------------------------------------->|\n\n");
	          
	          printf("\n#O lucro total de ingressos do cinema do dia analisado foi: R$ %d,00", lucro);
              printf("\n#Pessoas do sexo masculino maiores de idade: %d", maioridadeM);
	          printf("\n#Pessoas do sexo feminino maiores de idade: %d", maioridadeF);
	          printf("\n\n|--------------------------------------------------------------------------------------->|\n");
	
	
//Pula linha	
    printf("\n\n\n\n\n\n\n\n");	
	printf("LOADING...\n\n");
	
//Pause doo programa	
	system("pause");	
	
//Retorno da função	
	return 0;
}
