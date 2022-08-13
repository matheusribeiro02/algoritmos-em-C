#include <stdio.h>
#include <math.h>

// Programa Chuva

int main(){
	
	float poleg, mm;
	
	//leitura da variável
	printf("Digite a quantidade de polegadas de chuva: ");
	scanf("%f", &poleg);
	
	//Cálculo da conversão
	mm = 25.4 * poleg;

	//impressão do resultado do km/l
	printf("A quantidade de chuva em milimetros e de : %f", mm);
}
