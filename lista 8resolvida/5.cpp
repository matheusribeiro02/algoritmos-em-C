#include <stdio.h>
#include <math.h>

int main() {
	int tempo, horas, minutos, segundos;
	
	printf("Informe o número de segundos: \n\n");
  	scanf("%d",&segundos);
  	
 	printf("%d segundos ", segundos);
 	
  	horas = segundos / 3600;
  	segundos = segundos % 3600 ;
  	minutos = segundos / 60;
  	segundos = segundos % 60 ; 
  	
  	printf("equivalem a %d horas %d minutos %d segundos\n",horas,minutos,segundos);
  
  
  return 0;
}


