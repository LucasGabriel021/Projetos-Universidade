#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Desenvolva uma calculadora que receba n1, op, n2 (exatamente nessa ordem),
deverão serem consideradas +, -, *, / . Utilize uma função para realização de cada
operação aritmética (considere divisão por zero), uma função le_valida_operador e uma
função menu onde usuário utilizará a calculadora até informar que deseja sair.
*/

char le_valida_op(char operadorValidar);
char menu(char finalizarCal);

int main(void){
     setlocale(LC_ALL, "Portuguese");
     printf("Lista Avaliativa!\n");
     printf("Questão 05\n");
     printf("Calculadora\n\n");
     
     printf("Opções abaixo:\n");
     printf("-----------------------------------------------------------------------------------\n");
     printf("[+] --> Soma\n");
     printf("[-] --> Subtração\n");
     printf("[*] --> Multiplicação\n");
     printf("[/] --> Divisão\n");
     printf("-----------------------------------------------------------------------------------\n\n");
     
	float numeroA, numeroB;
	char operador, finalizar;
	do{
		printf("Digite o primeiro número para a operação: ");
		scanf("%f", &numeroA);
		
		operador=le_valida_op(operador);
		
		printf("Digite o segundo número para a operação: ");
		fflush(stdin);
		scanf("%f", &numeroB);
		
		if(numeroB == 0 && operador == '/'){
				printf("Operação de divisão por zero não é possível nos número reais.");
			}else{
				switch(operador){
					case '/':
						printf("%.1f\n", numeroA/numeroB);
						break;
					case '*':
						printf("%.1f\n", numeroA*numeroB);
						break;
					case '-':
						printf("%.1f\n", numeroA-numeroB);
						break;
					case '+':
						printf("%.1f\n", numeroA+numeroB);
						break;
				}
			}
			finalizar=menu(finalizar);
		}while(finalizar == 'S' || finalizar == 's');
     return 0;
}
	
char le_valida_op(char operadorValidar){
	do{
		printf("Digite uma operacao valida que voce deseja realizar: ");
		fflush(stdin);
		scanf("%c", &operadorValidar);
		
			if(operadorValidar != '/' && operadorValidar != '*' &&operadorValidar != '-' && operadorValidar != '+'){
				printf("Você inseriu um operador inválido, por favor insira novamente! \n");
			}else{
				printf("Operador válido!\n");
			}
		}while(operadorValidar != '/' && operadorValidar != '*' && operadorValidar != '-' &&operadorValidar != '+');
	return operadorValidar;
	}
	
char menu(char finalizarCal){
	printf("Você deseja fazer outro calculo? [S]--> Sim [N] --> Não\n");
	fflush(stdin);
	scanf("%c", &finalizarCal);
	
return finalizarCal;
}
