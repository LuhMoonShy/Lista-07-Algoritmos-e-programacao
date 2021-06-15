//Faça um algoritmo que leia a idade de até 100 pessoas e apresente a média entre todas, além de
//identificar a mais velha e a posição em que ela se encontra no vetor. A idade mais velha pode aparecer em
//mais de uma posição.
#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int i,  idade[100], maiorIdade = 0;
	float quantPessoas, somaIdades = 0.0, mediaIdades = 0.0;
	printf("Informe a quantidade de pessoas: ");
	scanf("%f", &quantPessoas);	
	for(i = 0; i < quantPessoas;i++){
		printf("Informe a idade da pessoa %d: ",i+1);
		scanf("%d",&idade[i]);
		somaIdades+=idade[i]; 
		if(maiorIdade<idade[i])
			maiorIdade=idade[i];
	}
	mediaIdades=somaIdades/quantPessoas;	
	printf("\nA média das idades apresentadas foi de: %.2f.\n",mediaIdades);
	printf("A pessoa mais velha tem %d anos,identificado na posição %d.",maiorIdade, i);	
	return 0;
}
