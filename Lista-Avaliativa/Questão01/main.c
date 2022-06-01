#include <stdio.h> //Biblioteca de comandos de entrada e saída
#include <stdlib.h> //Biblioteca de comandos gerais
#include <locale.h> //Biblioteca de acentuação

/*
Para evolução do nosso sistema eleitoral, informe uma idade utilizando o tipo inteiro.
Como saída de dados deverá ser considerado:
- Idade menor que 0 não nasceu
- 0 até 15 não vota
- 16 ou 17 opcional
- 18 até 64 obrigatório
- 65 ou mais opcional
- Exatamente 41 ganha prêmio 1 (não deverá apresentar obrigatório)
- Exatamente 82 ganha prêmio 2 (não deverá apresentar opcional)
- Não deverá utilizar a instrução "else if", somente "if" e "else"
- Não deverá utilizar || (or) e && (and)
*/

int main(void) {
	system("color 2"); //Mudar cor do console
	setlocale(LC_ALL, "Portuguese"); //Idioma do sistema
	int idade; //Variável de idade
	
	    printf("Lista Avaliativa!\n");
         printf("Questão 01\n");
	    printf("Sistema Eleitoral Eleitoral\n\n");
	    printf("Informe sua idade:");
	    fflush(stdin);
	    scanf("%d", &idade);
	    
	    if(idade < 1) {
		   printf("\n\nEssa pessoa não existe!");
	    }
	    else {
	          if(idade <= 15) {
 	   		  printf("\n\nEssa pessoa não pode votar ainda!");
		     }
	          else {
                    if(idade <= 17) {
	    			     printf("\n\nEssa pessoa o voto é opcional!");
  			     }
  			     else {
  			     	if(idade <= 64) {
  			     		printf("\n\nEssa pessoa o voto é obrigatório!");
  			     		if(idade == 41) {
  			     			printf("\nParabéns, o senhor(a) ganhou o 1° prêmio de R$: 1.000.000,00 de reais!");
					     }
			          }
			          else {
			          	if(idade >= 65) {
			          		printf("\n\nEssa pessoa o voto é opcional!");
			          		if(idade == 82) {
					    		     printf("\nParabéns, o senhor(a) ganhou o 2° prêmio de R$: 500.000,00 de reais!");
			     		     }
						}
					}
			     }
		     } 
	    }
	return 0;
	printf("\n\n");
}
