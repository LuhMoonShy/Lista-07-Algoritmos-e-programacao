//Fazer um algoritmo/programa que leia a matricula e o salário dos funcionários de uma empresa (máximo
//de 100 funcionários). Após a leitura de todos os dados, informe em uma tela limpa os dados lidos e o maior e
//menor salário dos funcionários. O maior e menor salário deverão ser obtidos, cada um, por uma função.
//Sabe-se ainda que não existe matrícula repetida na empresa.
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int numFunc,matricula[100],maior=0,menor=0;
	float salario[100];  
	bool matriculaConfirmada=true;
	printf("Informe o número de funcionários dessa empresa: ");
	scanf("%d",&numFunc);	
	for(int i=1;i<=numFunc;i++){
		do{
			printf("Informe a matrícula do funcionario[%d]: ",i);
			scanf("%d",&matricula[i]);
			
			for(int contador=0;contador<i;contador++){
				if(matricula[i]==matricula[contador]){
					printf("Essa matrícula já foi informada!\n");
				  	matriculaConfirmada=true;
				}
				if(matricula[i]!=matricula[contador]){
				  	matriculaConfirmada=false;
				}			
			}
		}while(matriculaConfirmada==true);		
		printf("Informe o salário do funcionario[%d]: ",i);
		scanf("%f",&salario[i]);
		if(i==1)
			menor=salario[i];
			else if(menor>salario[i])
				menor=salario[i];
		if(maior<salario[i])
			maior=salario[i];		
	}
	system("cls");
	printf("______________________________________________________\n");
	printf("                   DADOS OBTIDOS                        ");
	printf("______________________________________________________\n");	
	for(int i=1;i<=numFunc;i++){
		printf("O salário do funcionário[%d] é: R$%.2f.\n",matricula[i],salario[i]);
	}
	printf("O menor salário informado: R$%.2d.\n",menor);
	printf("O maior salário informado: R$%.2d.\n",maior);
	return 0;
}
