//Desenvolva um algoritmo que cadastre os preços de até 100 diferentes CDs em uma loja. Após este
//cadastro, o algoritmo deverá possibilitar a execução de uma de duas funções para aumento dos preços
//cadastrados, sendo a primeira de 10% para todos os CDs, enquanto a segunda aumenta o percentual
//informado pelo vendedor para todos os CDs. Será o vendedor que escolherá o tipo de aumento desejado.
//Após os cálculos deverá ser apresentado o percentual de aumento e, para cada CD, o valor sem aumento e o
//valor com aumento.
#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int i,quantCd,num;
	float precoCd[100],precoFinal[100],percentual;	
	printf("Informe quantos CD's têm na loja: ");
	scanf("%d",&quantCd);	
	for(i=1;i<=quantCd;i++){
		printf("Informe o valor do CD [%d]: ",i);
		scanf("%f",&precoCd[i]);
	}	
	printf("\nEscolha uma das opções abaixo:\n");
	printf(" |1|Para aumentar o calor de cada CD em 10%%.\n");
	printf(" |2|Para aumentar o preço do CD com o percentual desejado.\n");
	printf("\nInforme a opção desejada: ");
	scanf("%d",&num);
	switch(num){
		case 1: 
		for(i=1;i<=quantCd;i++){
			precoFinal[i]=precoCd[i]*(1+0.1);
		}
		break;		
		case 2:
			printf("Informe o valor percentual desejado:");
			scanf("%f",&percentual);
		for(i=1;i<=quantCd;i++){
			precoFinal[i]=precoCd[i]*(1+(percentual/100));
		} 
		break;
	}
	for(int i=1;i<=quantCd;i++){
		if(num==1){
			printf("\nO valor de aumento percentual foi 10%%.\n");	
		}
		else 
		printf("O valor do aumento percentual foi %.2f%%.\n", percentual);		
		printf("Valor sem aumento: R$%.2f.\n", precoCd[i]);
		printf("Passou a ser: R$%.2f.\n", precoFinal[i]);
	}
	return 0;
}

