//Elabore um algoritmo que armazene o c�digo funcional inteiro e respectivo sal�rio real de todos os
//funcion�rios de uma empresa. Ap�s a leitura de todos os dados apresente o maior e o menor sal�rio entre
//todos funcion�rios da empresa, usando um subprograma para encontrar o maior e outro para encontrar o
//menor. Por fim, acione uma outra fun��o para calcular a m�dia salarial paga por esta empresa. O maior e
//menor sal�rio dever�o ser apresentados por um procedimento acionado pelo algoritmo principal. A m�dia
//salarial dever� ser apresentada por um procedimento acionado pela fun��o que calcula a m�dia.
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
		printf("Informe o sal�rio do funcion�rio[%d]: ",i);
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
	printf("O valor do maior sal�rio � de: R$%.2d.\n",maiorSalario);
	printf("O valor do menor sal�rio � de: R$%.2d.\n",menorSalario);
	printf("__________________________________________\n");	
	printf("O valor da m�dia dos sal�rios � de: R$%.2f.\n",mediaSalario);
	printf("__________________________________________\n");	
	return 0;
}
