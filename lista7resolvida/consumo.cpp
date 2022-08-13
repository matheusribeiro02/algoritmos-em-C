#include <stdio.h>
#include <math.h>

// Programa que calcula a média de 4 valores

int main(){
	
	int valor1, valor2, valor3, valor4, media;
	
	//leitura da variável valores
	printf("Digite o primeiro valor: ");
	scanf("%i", &valor1);
	
	printf("Digite o segundo valor: ");
	scanf("%i", &valor2);
	
	printf("Digite o terceiro valor: ");
	scanf("%i" , &valor3);
	
	printf("Digite o quarto valor: ");
	scanf("%i" , &valor4);
	
	//Cálculo da média
	media = (valor1 + valor2 + valor3 +valor4)/4;

	//impressão do resultado do km/l
	printf("A media e : %i", media);
}
