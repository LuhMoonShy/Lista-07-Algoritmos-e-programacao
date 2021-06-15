//Escrever um algoritmo que solicite e leia letra por letra o nome completo de uma pessoa. O caractere
//sustenido “#” indica o fim do nome. Depois de lê-lo apresente todo o nome informado, sem o #.
#include <stdio.h>
#include <locale.h>
int main(){
	int i = 0;
	char letra[100];
	printf("Informe seu nome,letra por letra,como no exemplo a seguir:\n");
	printf("                      L U I S A                             \n");
	printf("Ao finalizar,insira #.\n");
	do{
		printf("\nInforme a letra: ");
		scanf("%c", &letra[i]);
		fflush(stdin);		
		if(letra[i] == '#')	break;
			else i++;					
	}while(true);	
	printf("\nJuntas,as letras formam o nome:\n");
	for(int j = 0; j <= i - 1; j++){
		printf("%c", letra[j]);
	}
	return 0;
}
