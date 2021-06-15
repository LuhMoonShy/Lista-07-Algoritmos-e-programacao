//Fazer um algoritmo/programa que leia a matricula e o sal�rio dos funcion�rios de uma empresa (m�ximo
//de 100 funcion�rios). Ap�s a leitura de todos os dados, informe em uma tela limpa os dados lidos e o maior e
//menor sal�rio dos funcion�rios. O maior e menor sal�rio dever�o ser obtidos, cada um, por uma fun��o.
//Sabe-se ainda que n�o existe matr�cula repetida na empresa.
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int numFunc,matricula[100],maior=0,menor=0;
	float salario[100];  
	bool matriculaConfirmada=true;
	printf("Informe o n�mero de funcion�rios dessa empresa: ");
	scanf("%d",&numFunc);	
	for(int i=1;i<=numFunc;i++){
		do{
			printf("Informe a matr�cula do funcionario[%d]: ",i);
			scanf("%d",&matricula[i]);
			
			for(int contador=0;contador<i;contador++){
				if(matricula[i]==matricula[contador]){
					printf("Essa matr�cula j� foi informada!\n");
				  	matriculaConfirmada=true;
				}
				if(matricula[i]!=matricula[contador]){
				  	matriculaConfirmada=false;
				}			
			}
		}while(matriculaConfirmada==true);		
		printf("Informe o sal�rio do funcionario[%d]: ",i);
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
		printf("O sal�rio do funcion�rio[%d] �: R$%.2f.\n",matricula[i],salario[i]);
	}
	printf("O menor sal�rio informado: R$%.2d.\n",menor);
	printf("O maior sal�rio informado: R$%.2d.\n",maior);
	return 0;
}
