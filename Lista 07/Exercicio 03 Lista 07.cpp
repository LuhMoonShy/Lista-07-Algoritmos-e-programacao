//Fa�a um algoritmo que calcule e escreva o somat�rio dos valores armazenados numa vari�vel composta
//unidimensional, chamada dados, de at� 100 elementos num�ricos a serem lidos.
#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, dados[100], quantN;
	float soma = 0.0;	
	printf("Informe quantos n�meros voc� deseja somar: ");
	scanf("%d", &quantN);
	for(i = 0; i < quantN; i++){
		printf("Informe o n�mero [%d]: ", i+1);
		scanf("%d", &dados[i]);
		fflush(stdin);
		soma = soma + dados[i];  	
	}
	printf("Soma Final: %.1f", soma);
	return 0;
}
