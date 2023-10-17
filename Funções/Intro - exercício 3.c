#include<stdio.h>

main(){

int fahrenhint, vFinal;

printf("Informe o valor em Fahrenhint:");
scanf("%d", &fahrenhint);

vFinal = convercao(fahrenhint);

printf("A convercao para celsius e: %d", vFinal);
}

int convercao(int fahrenhint){

int result = (fahrenhint - 32.0) * (5.0 / 9.0);
return result;
}
