//Ler um vetor A e B, cada um com 10 elementos. Gerar uma matriz C onde cada elemento corresponde a 
//A + B. Pesquise um dado fornecido pelo usu�rio no vetor C.
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int numA[10],numB[10],somaC[10],i,j,numPesquisa;	
	for(i=0;i<10;i++){
		printf("Informe o n�mero X[%d]: ",i+1);
		scanf("%d",&numA[i]);
	}
	printf("\n");
	for(i=0;i<10;i++){
		printf("Informe o n�mero Y[%d]: ",i+1);
		scanf("%d",&numB[i]);
	}	
	system("cls");
	for(i=0;i<10;i++){
		somaC[i]=numA[i]+numB[i];
		printf("%d + %d = %d\n",numA[i],numB[i],somaC[i]);
	}
	printf("Informe o n�mero que deseja encontrar: ");
	scanf("%d",&numPesquisa);
	printf("\n");
	for(i=0;i<10;i++){
		if(somaC[i]==numPesquisa)
			printf("N�mero encontrado na posi��o %d.\n",i+1);
	}	
	return 0;
}
