#include <stdio.h>

 int main(){

	char nomevend[50];
	float carro, venda , salario;
	int salariofixo = 500;
	
		printf("Digite o nome do vendedor:\n\n ");
		scanf("%s", &nomevend);
	
		printf("Quantos carros foram vendidos por ele?:\n\n ");
		scanf("%f", &carro);
	
		printf("Qual o valor total das vendas dos carros ?:\n\n ");
		scanf("%f", &venda);
	
		salario = salariofixo + (50*carro) + (venda*0.05);
	
		printf("O salario de %s foi de : %f este mes\n", nomevend, salario);
	
	
	return 0;
}
