#include <stdio.h>
#include <math.h>

// Programa que converte celsius em fahrenheit

int main(){
	
	int celsius, fahr;
	
	//leitura da vari�vel
	printf("Digite a temperatura em celsius: ");
	scanf("%i", &celsius);
	
	//C�lculo da convers�o
	fahr = 9* celsius/5 + 32;

	//impress�o do resultado do km/l
	printf("A temperatura em fahrenheit : %i", fahr);
}
