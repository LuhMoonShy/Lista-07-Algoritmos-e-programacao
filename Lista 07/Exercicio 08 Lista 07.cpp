//Fazer um algoritmo que leia at� 30 caracteres e os ordene em ordem decrescente. � considerado que A <
//B < C < ... (ordem alfab�tica).
#include <stdio.h>
#include <locale.h>
int main(){
	int quantLetra,i,j,troca;
	char letra[30];	
	printf("Informe a quantidade de letras: ");
	scanf("%d",&quantLetra);
	fflush(stdin);	
	for(i=1;i<=quantLetra;i++){
		printf("Informe a letra %d: ",i);
		scanf("%c",&letra[i]);
		fflush(stdin);
	}	
	for(i=1;i<=quantLetra;i++){
		for(j=i+1;j<=quantLetra;j++){
			if(letra[i]<letra[j]){
				troca=letra[j];
				letra[j]=letra[i];
				letra[i]=troca;
			}
		}
	}	
	printf("Ordem alfab�tica decrescente:\n");
	for(i=1;i<=quantLetra;i++){
		printf("%c ",letra[i]);
	}	
	return 0;
}
