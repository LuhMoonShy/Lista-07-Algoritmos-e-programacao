//Uma grande empresa deseja saber quais os tr�s empregados mais recentes. Fazer um algoritmo para ler 
//um n�mero indeterminado de informa��es (m�ximo de 50) contendo a matr�cula funcional do empregado e 
//o n�mero de meses de trabalho deste empregado. Mostre os tr�s empregados mais recentes. N�o existem 
//dois empregados admitidos no mesmo m�s e a matr�cula igual a zero �0� encerra a leitura.
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
int main(){
	setlocale(LC_ALL, "Portuguese");	
	int counter,matricula[50],meses[50],i=1,j=1,troca;
	bool confirmadaMatric=true,confirmadoMeses=true;	
	while(matricula[i]!=0||i<=50){
		do{
			printf("Informe a quantos meses esse funcion�rio trabalha na empresa: ");
			scanf("%d", &meses[i]);
			for(j = 0; j < i; j++){
				if(meses[i] == meses[j]){
					printf("M�s j� inserido!\n");
					confirmadoMeses = true;
				}
				if(meses[i] != meses[j]){
					confirmadoMeses = false;
				}
			}
		}while(confirmadoMeses == true);
		do{
			printf("Informe a matr�cula desse funcion�rio: ");
			scanf("%d", &matricula[i]);
			for(j = 0; j < i; j++){
				if(matricula[i] == matricula[j]){
					printf("Matr�cula j� inserida!\n");
					confirmadaMatric = true;
				}
				if(matricula[i] != matricula[j]){
					confirmadaMatric = false;								
				}
			}
		}while(confirmadaMatric == true);
		if(matricula[i] == 0) break;
		i++;
	}
	for(counter = 1; counter <= i; counter++){
		for(int k = counter + 1; k <= i; k++){
			if(meses[counter] > meses[k]){
				troca = meses[k];
				meses[k] = meses[counter];
				meses[counter] = troca;
				
				troca = matricula[k];
				matricula[k] = matricula[counter];
				matricula[counter] = troca;
			}
		}
	}
	system("cls");
	printf("Os tr�s funcion�rios mais recentes :\n");	
	for(counter = 1; counter <= 3; counter++){
		printf("Esta na empresa a: %d meses.\n", meses[counter]);
		printf("Matricula do empregado: %d.\n", matricula[counter]);
	}
	return 0;
} 
