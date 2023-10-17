#include<stdio.h>

float IMC(float peso,float altura);
main(){

float peso, altura, rFinal;

printf("Informe seu peso:");
scanf("%f", &peso);
printf("Informe sua altura:");
scanf("%f", &altura);

rFinal = IMC(peso,altura);

printf("Seu IMC e:%0.2f", rFinal);
}

float IMC(float peso,float altura){

int result = peso / (altura * altura);
return result;
}
