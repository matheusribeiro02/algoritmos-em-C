#include <stdio.h>
#include <math.h>

// Programa quadrado de um n�mero
int main(){
	
	float num, resultado;
	
	//leitura da vari�vel
	printf("Digite um n�mero qualquer: ");
	scanf("%f", &num);
	
	//C�lculo da convers�o
    resultado = num * num;

    //resultado = (pow(num,2);

	//impress�o do resultado do km/l
	printf("O resultado e : %f", resultado);
}
