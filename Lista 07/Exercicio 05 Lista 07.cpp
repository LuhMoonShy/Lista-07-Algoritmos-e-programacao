//Fa�a um algoritmo que leia um vetor de at� 80 elementos. Ap�s a leitura de todos os dados, leia um
//n�mero e verifique se existem elementos no vetor iguais ao n�mero lido. Se existirem, escrever, em uma tela
//limpa, quantas vezes eles aparecem e quais as posi��es em que eles est�o armazenados no vetor.
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int quantN,quantR=0,numR,num[80],i;	
	printf("Informe quantos n�meros ser�o lidos: ");
	scanf("%d",&quantN);	
	for(i=1;i<=quantN;i++){
		printf("Informe o n�mero %d: ",i);
		scanf("%d",&num[i]);
	}
	printf("Qual n�mero voc� deseja saber a repeti��o? ");
	scanf("%d",&numR);
	for(i=1;i<=quantN;i++){
		if(num[i]==numR)
			quantR++;			
	}
	system ("cls");
	printf("O n�mero %d repetiu %d vezes.\nNas posi��es:\n",numR,quantR);
	for(i=1;i<=quantN;i++){
		if(num[i] == numR)
			printf("[%d]\t", i);
	}	
	return 0;
}
