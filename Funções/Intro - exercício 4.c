#include<stdio.h>

main(){

int altura, raio, rFinal;

printf("Informe a altura:");
scanf("%d", &altura);
printf("Informe o raio:");
scanf("%d", &raio);

rFinal = cilindro(altura, raio);

printf("O volume desse cilidnro e:%d", rFinal);
}

int cilindro(int altura,int raio){

int result = (float)3.1414592 * (raio * raio) * altura;
return result;
}
