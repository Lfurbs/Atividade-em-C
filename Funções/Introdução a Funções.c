#include<stdio.h>

main(){

    int num1, num2, rFinal;

    printf("Informe o valor do primeiro numero:");
    scanf("%d", &num1);

    printf("Informe o valor do segundo numero:");
    scanf("%d", &num2);

    rFinal = comparacao(num1, num2);

    printf("O maior numero e: %d", rFinal);

}

int comparacao(int num1, int num2){

    if (num1 > num2)
    {
        return num1;
    }else{
        return num2;
    }
    
}