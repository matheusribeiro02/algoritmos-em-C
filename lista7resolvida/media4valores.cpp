#include <stdio.h>
#include <math.h>

// Programa que converte celsius em fahrenheit

int main(){
	
	int celsius, fahr;
	
	//leitura da variável
	printf("Digite a temperatura em celsius: ");
	scanf("%i", &celsius);
	
	//Cálculo da conversão
	fahr = 9* celsius/5 + 32;

	//impressão do resultado do km/l
	printf("A temperatura em fahrenheit : %i", fahr);
}
