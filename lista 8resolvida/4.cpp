#include <stdio.h>
#include <math.h>

// Programa de notas do aluno

int main(){
	
	float nota1, nota2, nota3 , mediafinal;
	
	//leitura da variável NOTA1 peso 2
	printf("Digite a nota 1: ");
	scanf("%f", &nota1);
	
	//leitura da variável NOTA 2 peso 3
	printf("Digite a nota 2: ");
	scanf("%f", &nota2);
	
	//leitura da variável NOTA3 peso 5
	printf("Digite a nota 3: ");
	scanf("%f", &nota3);
	
	//Cálculo da variável MEDIA FINAL
	mediafinal = (nota1*2 + nota2*3 + nota3*5)/10;

	//impressão do resultado 
	printf("A sua media final e : %f", mediafinal);

}
