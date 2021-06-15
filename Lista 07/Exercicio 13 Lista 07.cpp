//Fazer um algoritmo que:
//a) leia uma frase de até 80 caracteres, incluindo os brancos
//b) conte quantos caracteres em branco existem na frase
//c) conte quantas vezes a letra ‘a’ ou ‘A’ aparece
//d) conte quantas vezes ocorre um mesmo par de letras na frase e quais são elas;
//e) apresente o que foi calculado nos itens b, c e d
#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<stdlib.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int quantCaracteres,i,j,vezesRepetiu=0,repetiuMaisVezes=0,quantBrancos=0,quant_a=0,quant_A=0;
	char frase[80],par[2],par2[2],parMaisRepetiu[2];	
	printf("Insira uma frase: ");
	fgets(frase,80,stdin);	
	quantCaracteres=strlen(frase);	
	for(i=0;i<quantCaracteres;i++){
		switch(frase[i]){
			case ' ':quantBrancos++; 
			break;
			case 'A':quant_A++; 
			break;
			case 'a':quant_a++; 
			break;
		}			
	}		
	for(i=0;i<quantCaracteres;i++){
		vezesRepetiu=0;
		par[0]=frase[i];
		par[1]=frase[i+1];
		for(j=0;j<quantCaracteres;j++){
			par2[0]=frase[j];
			par2[1]=frase[j+1];
			if(par[0]==par2[0]&&par[1]==par2[1]){
				vezesRepetiu++;
			}					
		}
		if(vezesRepetiu>repetiuMaisVezes){
			repetiuMaisVezes=vezesRepetiu ;
			strcpy(parMaisRepetiu,par);
		}
	}	
	system("cls");
	printf(" A frase possui %d caracteres.\n", quantCaracteres);	
	printf(" Tendo %d caracteres em branco.\n", quantBrancos);
	printf(" Tendo %d caracteres 'a'.\n", quant_a);
	printf(" Tendo %d caracteres 'A'.\n", quant_A);
	printf(" Os pares de caracteres que mais se repetiram foram: %c e %c.\n",parMaisRepetiu[0],parMaisRepetiu[1]);
	printf(" Tendo sido repetidos %d vezes.", repetiuMaisVezes);
	return 0;
}
