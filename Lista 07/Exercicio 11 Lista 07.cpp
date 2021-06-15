//Elabore um algoritmo que armazene o código funcional inteiro e respectivo salário real de todos os
//funcionários de uma empresa. Após a leitura de todos os dados apresente o maior e o menor salário entre
//todos funcionários da empresa, usando um subprograma para encontrar o maior e outro para encontrar o
//menor. Por fim, acione uma outra função para calcular a média salarial paga por esta empresa. O maior e
//menor salário deverão ser apresentados por um procedimento acionado pelo algoritmo principal. A média
//salarial deverá ser apresentada por um procedimento acionado pela função que calcula a média.
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int i,quantFunc,maiorSalario,menorSalario;
	float salario[100],mediaSalario,somaSalario;	
	printf("Informe quantos funcionarios tem nessa empresa: ");
	scanf("%d",&quantFunc);	
	for(i=1;i<=quantFunc;i++){
		printf("Informe o salário do funcionário[%d]: ",i);
		scanf("%f",&salario[i]);
		somaSalario+=salario[i];
		if(i==1)
			menorSalario=salario[i];
			else if (menorSalario>salario[i])
				menorSalario=salario[i];
		if(maiorSalario<salario[i])
			maiorSalario=salario[i];
	}
	system("cls");
	mediaSalario=somaSalario/quantFunc;	
	printf("__________________________________________\n");
	printf("             DADOS OBTIDOS                \n");
	printf("__________________________________________\n");
	printf("O valor do maior salário é de: R$%.2d.\n",maiorSalario);
	printf("O valor do menor salário é de: R$%.2d.\n",menorSalario);
	printf("__________________________________________\n");	
	printf("O valor da média dos salários é de: R$%.2f.\n",mediaSalario);
	printf("__________________________________________\n");	
	return 0;
}
