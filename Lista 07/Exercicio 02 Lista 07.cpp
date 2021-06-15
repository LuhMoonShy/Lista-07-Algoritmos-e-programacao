//Altere o algoritmo anterior considerando que não se conhece quantos alunos esta turma tem (menos que
//50). O número de aluno será informado pelo usuário.
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int aluno,nota,contador;
	do{
		printf("Informe a quantidade de alunos que a sala possui: \n");
		scanf("%i",&aluno);
		if(aluno<=0 or aluno>50){
		printf("Quantidade incorreta!Tente novamente.\n");	
		} 
	}while(aluno<=0 or aluno>50);
	for(contador=1;contador<=aluno;contador++){
		printf("Informe a nota do aluno %d: ",contador);
		scanf("%f",&nota);
	}while(contador<aluno);
	system("pause");
	return 0;
}
