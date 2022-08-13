#include <stdio.h>
#include <math.h>

// Programa quadrado de um número
int main(){
	
	float num, resultado;
	
	//leitura da variável
	printf("Digite um número qualquer: ");
	scanf("%f", &num);
	
	//Cálculo da conversão
    resultado = num * num;

    //resultado = (pow(num,2);

	//impressão do resultado do km/l
	printf("O resultado e : %f", resultado);
}
