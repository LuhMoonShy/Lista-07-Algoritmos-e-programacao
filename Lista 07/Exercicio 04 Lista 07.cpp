//Fa�a um algoritmo que leia at� 30 letras e as escreva na ordem inversa (ou contr�ria) da que foram lidas.
#include <stdio.h>
#include <locale.h>
#include<stdlib.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, numL;
	char letras[30];	
	printf("Informe quantas letras ser�o lidas: ");
	scanf("%d",&numL);
	fflush(stdin);	
	for(i=1;i<=numL;i++){
		printf("Informe a letra %d: ",i);
		scanf("%c",&letras[i]);	
		fflush(stdin);	
	}
	system("cls");
	printf("Ordem Inversa:\n");
	for(i=numL;i>=1;i--){
		printf("%c\t",letras[i]);
	}
	return 0;
}
