#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

/*
Elabore um programa que receba o nome completo de um usuário e retorne no
formato de citação científica, do tipo:
Ex 1:
João Alberto Soares Sobrinho
SOBRINHO, J. A. S.;
Ex 2:
Lee Yan
YAN, L.;
Considere uma String como um "vetor" de caracteres.
*/

int main(void) {
     setlocale(LC_ALL, "Portuguese");
     printf("Lista Avaliativa!\n");
     printf("Questão 04\n");
     printf("Manipulação de strings\n\n");
     
     char nome[35];
     printf("Informe seu nome: ");
     fgets(nome, 35, stdin);
     
     int tamanho = strlen(nome), espaco_id, i;
     tamanho = strlen(nome);
	
	// Loop para deixar todos os caracteres minusculos.
	for(i = 0; i < tamanho; i++){
		nome[i] = tolower(nome[i]);
	}

     // Loop para identifica o último espaço	
	int id_espaco;
	for(i = 0; i < tamanho; i++) {
	     if(nome[i] == ' ') {
	          id_espaco = i;
          }
     }
     
     // Loop para colocar apenas o último nome em maisculo
     char ultimo_nome[35];
     printf("\nÚltimo nome: ");
     for(i = id_espaco + 1; i < tamanho; i++) {
          ultimo_nome[i] = toupper(nome[i]);
          printf("%c", ultimo_nome[i]);
     }
     // Loop para colocar apenas as primeiras letras do nome em caica alta
     for(i = 0; i < tamanho; i++) {
          if(i == 0 || nome[i - 1] == ' ') {
               nome[i] = toupper(nome[i]);
          }
          else {
               nome[i] = nome[i];
          }
     }
     printf("Nome: %s", nome);
     
     // Loop para pegar as siglas dos nomes em caixa alta
     printf("Siglas: ");
     for(i = 0; i < tamanho; i++) {
          if(isupper(nome[i])) {
               printf("%c.", nome[i]);
          }
     }
     
     printf("\n\n");
	return 0;
}
