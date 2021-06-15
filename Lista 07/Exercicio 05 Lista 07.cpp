//Faça um algoritmo que leia um vetor de até 80 elementos. Após a leitura de todos os dados, leia um
//número e verifique se existem elementos no vetor iguais ao número lido. Se existirem, escrever, em uma tela
//limpa, quantas vezes eles aparecem e quais as posições em que eles estão armazenados no vetor.
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int quantN,quantR=0,numR,num[80],i;	
	printf("Informe quantos números serão lidos: ");
	scanf("%d",&quantN);	
	for(i=1;i<=quantN;i++){
		printf("Informe o número %d: ",i);
		scanf("%d",&num[i]);
	}
	printf("Qual número você deseja saber a repetição? ");
	scanf("%d",&numR);
	for(i=1;i<=quantN;i++){
		if(num[i]==numR)
			quantR++;			
	}
	system ("cls");
	printf("O número %d repetiu %d vezes.\nNas posições:\n",numR,quantR);
	for(i=1;i<=quantN;i++){
		if(num[i] == numR)
			printf("[%d]\t", i);
	}	
	return 0;
}
