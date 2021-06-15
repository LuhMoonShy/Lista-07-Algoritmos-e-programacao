//Alterar o algoritmo de ordenação de caracteres para pesquisar um caractere específico.
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int quantLetra,i,j,troca;
	char letra[30],caracterPesquisado;	
	printf("Informe a quantidade de letras: ");
	scanf("%d", &quantLetra);
	fflush(stdin);	
	for(i=1;i<=quantLetra;i++){
		printf("Informe a letra %d: ",i);
		scanf("%c",&letra[i]);
		fflush(stdin);
	}
	printf("Informe o caracter que desejas encontrar: ");
	scanf("%c",&caracterPesquisado);	
	for(i=1;i<=quantLetra;i++){
		if(letra[i]==caracterPesquisado)
		printf("O caracter se encontra na posição %d.",i);
	}	
	return 0;
}
