#include <stdio.h>
#include <math.h>

// Programa de notas do aluno

int main(){
	
	float nota1, nota2, nota3 , mediafinal;
	
	//leitura da vari�vel NOTA1 peso 2
	printf("Digite a nota 1: ");
	scanf("%f", &nota1);
	
	//leitura da vari�vel NOTA 2 peso 3
	printf("Digite a nota 2: ");
	scanf("%f", &nota2);
	
	//leitura da vari�vel NOTA3 peso 5
	printf("Digite a nota 3: ");
	scanf("%f", &nota3);
	
	//C�lculo da vari�vel MEDIA FINAL
	mediafinal = (nota1*2 + nota2*3 + nota3*5)/10;

	//impress�o do resultado 
	printf("A sua media final e : %f", mediafinal);

}
