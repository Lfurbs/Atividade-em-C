#include<stdio.h>

main(){

int raio, rFinal;

printf("Informe o raio:");
scanf("%d", &raio);

rFinal = esfera(raio);

printf("O volume dessa esfera e:%d", rFinal);
}

int esfera(int raio){

int result = 4 / 3 * (float)3.1414592 * (raio * raio * raio);
return result;
}
