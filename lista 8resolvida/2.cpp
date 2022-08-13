#include <stdio.h>
#include <math.h>

int main(){

       int i, ano, mes, dia;

       printf("Informe sua idade em ANO MESES E DIAS\n"); 
       scanf("%d %d %d", &ano, &mes, &dia);

       i= (ano * 365) + (mes * 30) + dia;
       printf("A idade em dias e: %d", i);

    
    
}
