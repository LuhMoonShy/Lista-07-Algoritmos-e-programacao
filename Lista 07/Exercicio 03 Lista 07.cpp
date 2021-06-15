//Faça um algoritmo que calcule e escreva o somatório dos valores armazenados numa variável composta
//unidimensional, chamada dados, de até 100 elementos numéricos a serem lidos.
#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, dados[100], quantN;
	float soma = 0.0;	
	printf("Informe quantos números você deseja somar: ");
	scanf("%d", &quantN);
	for(i = 0; i < quantN; i++){
		printf("Informe o número [%d]: ", i+1);
		scanf("%d", &dados[i]);
		fflush(stdin);
		soma = soma + dados[i];  	
	}
	printf("Soma Final: %.1f", soma);
	return 0;
}
