#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Elabore um programa que receba os seguintes dados do formulário abaixo (atualmente preenchido em papel) e
apresente na tela ao final, aproximando-se ao máximo do "layout" original, desconsidere as máscaras de valores
como os pontos no CPF por exemplo.
*/

int main(void) {
     setlocale(LC_ALL, "Portuguese");
     printf("Lista Avaliativa!\n");
     printf("Questão 02\n");
	printf("Entrada e saída de dados\n\n");
     printf("Preencha as perguntas do formulario abaixo: \n");

//Aba dos nomes
//------------------------------------------------------
     char razao_social[35], nome_completo[35];

     printf("Informe o seu nome completo: ");
     fgets(nome_completo, 35, stdin);

     printf("Informe seu nome social: ");
     fflush(stdin);
     fgets(razao_social, 35, stdin);

//Aba de endereços
//-------------------------------------------------------

     char endereco[50], complemento[35], bairro[35], estado[2], cidade[35];
     int numero_casa, cep;
     printf("Informe seu indereco: ");
     fflush(stdin);
     fgets(endereco, 50, stdin);

     printf("Informe o numero de dua residencia: ");
     fflush(stdin);
     scanf("%d", &numero_casa);

     printf("Informe o complemento de sua residencia: ");
     fflush(stdin);
     fgets(complemento, 35, stdin);

     printf("Informe seus bairro: ");
     fflush(stdin);
     fgets(bairro, 35, stdin);

     printf("Informe o CEP de sua residencia: ");
     fflush(stdin);
     scanf("%d", &cep);

     printf("Informe a sigla do seu estado: ");
     fflush(stdin);
     fgets(estado, 2, stdin);

     printf("Informe sua cidade: ");
     fflush(stdin);
     fgets(cidade, 35, stdin);

//Aba de contatos
//-----------------------------------------------------------------------------

     int ddd_residencial, telefone_residencial, ddd_celular, telefone_celular, cpf, cnpj, insc_estadual, insc_municipal, cnae, dia_nascimento, mes_nascimento, ano_nascimento;

     printf("Informe o DDD do seu numero residencial: ");
     fflush(stdin);
     scanf("%d", &ddd_residencial);

     printf("Informe o seu telefone residencial: ");
     fflush(stdin);
     scanf("%d", &telefone_residencial);   

     printf("Informe o DDD do seu numero pessoal: ");
     fflush(stdin);
     scanf("%d", &ddd_celular);

     printf("Informe o seu telefone pessoal: ");
     fflush(stdin);
     scanf("%d", &telefone_celular);     

     printf("Informe seu CPF: ");
     fflush(stdin);
     scanf("%d", &cpf);

     printf("Informe seu CNPJ: ");
     fflush(stdin);
     scanf("%d", &cnpj);

     printf("Informe sua data de nascimento: \n");
     printf("Informe o dia de seu nascimento: ");
     fflush(stdin);
     scanf("%d", &dia_nascimento);
     printf("Informe o mes de seu nascimento: ");
     fflush(stdin);
     scanf("%d", &mes_nascimento);
     printf("Informe o ano de seu nascimento: ");
     fflush(stdin);
     scanf("%d", &ano_nascimento);

     printf("Informe sua Inscricao Estadual: ");
     fflush(stdin);
     scanf("%d", &insc_estadual);

     printf("Informe sua Inscricao Municipal: ");
     fflush(stdin);
     scanf("%d", &insc_municipal);

     printf("Informe o sue CNAE: ");
     fflush(stdin);
     scanf("%d", &cnae);

//Aba de contatos por email
//-------------------------------------------------------------------------------------
      
     char email[35];
     int contato_responsavel, dia_contrato, mes_contrato, ano_contrato; 
     printf("Informe o seu email: ");
     fflush(stdin);
     fgets(email, 35, stdin);

     printf("Informe o contato do responsavel: ");
     fflush(stdin);
     scanf("%d", &contato_responsavel);

     printf("Informe a data de cadastro: \n");
     printf("Informe o dia do cadastro: ");
     fflush(stdin);
     scanf("%d", &dia_contrato);
     printf("Informe o mes do cadastro: ");
     fflush(stdin);
     scanf("%d", &mes_contrato);
     printf("Informe o ano do seu cadastro: ");
     fflush(stdin);
     scanf("%d", &ano_contrato);
     
//Aba de dados do carro
//-----------------------------------------------------------------------------------------
     
     int ano_carro1, ano_carro2;
     char modelo1[10], cor1[10], modelo2[10], cor2[10], placa_carro1[7], placa_carro2[7];

     printf("Digite a placa de um primeiro veiculo: ");
     fflush(stdin);
     fgets(placa_carro1, 7, stdin);

     printf("Digite o ano do primeiro veiculo: ");
     fflush(stdin);
     scanf("%d", &ano_carro1);
     
     printf("Digite o modelo do primeiro veiculo: ");
     fflush(stdin);
     fgets(modelo1, 10, stdin);

     printf("Digite a cor do primeiro veiculo: ");
     fflush(stdin);
     fgets(cor1, 10, stdin);

     printf("Digite a placa de um segundo veiculo: ");
     fflush(stdin);
     fgets(placa_carro2, 7, stdin);

     printf("Digite o ano do segundo veiculo: ");
     fflush(stdin);
     scanf("%d", &ano_carro2);
     
     printf("Digite o modelo do segundo veiculo: ");
     fflush(stdin);
     fgets(modelo2, 10, stdin);;

     printf("Digite a cor do segundo veiculo: ");
     fflush(stdin);
     fgets(cor2, 10, stdin);    
     
     printf("Placa1: %s", placa_carro1);
     printf("Modelo1: %s", modelo1);
     printf("Ano1: %d", ano_carro1);
     printf("Cor1: %s", cor1);

     printf("Razao Social e Nome Completo:\n");
     printf("Nome completo: %s", nome_completo);
     printf("\nNome social: %s", razao_social);

     printf("\n\nEndereço: \n%s", endereco);
     printf("Numero: %d \t", numero_casa);
     printf("Complemento: %s \t", complemento);
     printf("Bairro: %s", bairro);

     return 0;
}

