#include<stdio.h>

main(){
   
int mes;

printf("Escolha um mes (1 a 12):");
scanf("%d", &mes);

if (mes > 1 && mes < 13)
{
    peepee(mes);
}else{
    printf("Mes invalido");
}

}

int selecao(int peepee){

switch (peepee)
{
case 1:
    printf("Esse numero corresponde a Janeiro, que tem 31 dias");
    break;
case 2:
    printf("Esse numero corresponde a Fevereiro, que tem 28 dias");
    break;
case 3:
    printf("Esse numero corresponde a Marco, que tem 31 dias");
    break;
case 4:
    printf("Esse numero corresponde a Abril, que tem 30 dias");
    break;
case 5:
    printf("Esse numero corresponde a Maio, que tem 31 dias");
    break;
case 6:
    printf("Esse numero corresponde a Junho, que tem 30 dias");
    break;
case 7:
    printf("Esse numero corresponde a Julho, que tem 31 dias");
    break;
case 8:
    printf("Esse numero corresponde a Agosto, que tem 30 dias");
    break;
case 9:
    printf("Esse numero corresponde a Setembro, que tem 31 dias");
    break;
case 10:
    printf("Esse numero corresponde a Outubro, que tem 30 dias");
    break;
case 11:
    printf("Esse numero corresponde a Novembro, que tem 31 dias");
    break;
case 12:
    printf("Esse numero corresponde a Dezembro, que tem 31 dias");
    break;
    }
}