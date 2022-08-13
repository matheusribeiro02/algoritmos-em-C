#include <stdio.h>

int main() {
	
	int idade , ano , mes , dias;
	
	printf("Digite sua idade em dias : ");
	scanf("%d" , &dias);
	
	ano = (dias/365);
	mes = (dias/365) * 12;
	
	 printf("Ate agora voce viveu %d anos, %d meses e %d dias.", ano , mes, dias);
	
	
	
}
