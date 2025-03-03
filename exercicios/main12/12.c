#include <stdio.h>

int main(){
//Dado um valor em reais e a cotação do dólar, converta esse 
//valor em dólares
    float real, result;
    printf("Digite o valor em reais:\n");
    scanf("%f", &real);
    result = real * 5.88;
    printf("O resultado da conversao e: %.2f", result);

}