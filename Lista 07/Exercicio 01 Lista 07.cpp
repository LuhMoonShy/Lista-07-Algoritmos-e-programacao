//Escrever um programa que declare um vetor de reais e leia as notas de 30 alunos.
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	float nota[30];
	int contador;
	for(contador=1;contador<=30;contador++){	
		printf("Informe a nota do aluno %d: ",contador);
		scanf("%f",&nota[contador]);
	}
	system("pause");
	return 0;
}
