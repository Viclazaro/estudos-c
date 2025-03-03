#include <stdio.h>
int main(){
    float x, y, result;
    int op;
    printf("Escolha uma operação:\n1 - Adicao\n2 - Subtracao\n3 - Multiplicacao\n4 - Divisao\n");
    scanf("%d", &op);
    printf("Digite o primeiro numero:\n");
    scanf("%f", &x);
    printf("Digite o segundo numero:\n");
    scanf("%f", &y);
    switch(op){

        case 1: 
        result = x + y;
        printf("Resultado: %f", result); break;
        case 2: 
        result = x - y;
        printf("Resultado: %f", result); break;
        case 3: 
        result = x * y;
        printf("Resultado: %f", result); break;
        case 4: 
        result = x / y;
        printf("Resultado: %f", result); break;
    }
}