#include <stdio.h>

 int main(){

	int hamb,cheese,fritas,refri,milk;
	float conta;
	
	printf("Quantos hamburgueres voce consumiu ? : \n");
	scanf("%d", &hamb);
	
	printf("Quantos cheeseburgueres voce consumiu ? : \n");
	scanf("%d", &cheese);
	
	printf("Quantas fritas voce consumiu ? : \n");
	scanf("%d", &fritas);
	
	printf("Quantos refrigerantes voce consumiu ? : \n");
	scanf("%d", &refri);
	
	printf("Quantos milkshakes voce consumiu ? : \n");
	scanf("%d", &milk);
	
	//total da comanda
	
	conta= 3*hamb + 2.5*cheese + 2.5*fritas + 1*refri + 3*milk;
	
	printf("O total gasto foi de: %f reais\n", conta);
	
	
	return 0;
}
