#include <stdio.h>
#include <math.h>

// Programa Chuva

int main(){
	
	float poleg, mm;
	
	//leitura da vari�vel
	printf("Digite a quantidade de polegadas de chuva: ");
	scanf("%f", &poleg);
	
	//C�lculo da convers�o
	mm = 25.4 * poleg;

	//impress�o do resultado do km/l
	printf("A quantidade de chuva em milimetros e de : %f", mm);
}
