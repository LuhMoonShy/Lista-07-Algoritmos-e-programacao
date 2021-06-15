//Elabore um algoritmo que leia um conjunto de valores inteiros correspondentes a até 80 notas, variando 
//de 0 a 10, dos alunos de uma turma (vários alunos). Calcule a frequência de cada nota e apresente uma 
//tabela contendo os valores das notas e suas respectivas frequências.
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int m,i,l=0,j,quantNotas,notas[80],notasRepetidas[80],freqNotas[80];	
	printf("Informe a quantidade de notas: ");
	scanf("%d",&quantNotas);	
	for(i=0;i<quantNotas;i++){
		do{
			printf("Informe a nota (0 a 10): ");
			scanf("%d",&notas[i]);
		}while(notas[i]<0||notas[i]>10);	
	}
	for(i=0;i<quantNotas;i++){
		for(j=0;j<quantNotas;j++){
			if(notas[i]==notas[j]){
				notasRepetidas[l] = notas[i];
				l++;
				for (m=0;m<l;m++){
				if (notasRepetidas[m]==notasRepetidas[m + 1]) 
					l--; 
				}
			}				
		}
	}
	for(i=0;i<l;i++){
		freqNotas[i]=0;
		for(j=0;j<quantNotas;j++){
			if(notasRepetidas[i]==notas[j]){
				freqNotas[i]+=1;
			}
		}
	}
	system("cls");
	printf("\n");
	for(i=0;i<l;i++){
		printf("O número %d repetiu %d vez/vezes.\n",notasRepetidas[i],freqNotas[i]);
	}
	return 0;
}
