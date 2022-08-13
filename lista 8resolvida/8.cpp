#include <stdio.h>

 int main(){

	char nomealuno[50];
	float nota1, nota2 , media;
	
		printf("Digite o nome do aluno: \n\n ");
		scanf("%s", &nomealuno);
		
		printf("Digite a nota da prova 1: \n\n ");
		scanf("%f", &nota1);
	
		printf("Digite a nota da prova 2: \n\n ");
		scanf("%f", &nota2);

	//cálculo da média do aluno
		
		media = (nota1+nota2)/2;
	
		printf("A media de %s foi de : %f", nomealuno, media);
	
	
	return 0;
}
