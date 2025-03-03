#include <stdio.h>
#include <math.h>

int main(){
//Construa um algoritmo que receba dois números (X e Y) e calcule
// o valor de X^Y
    int x, y, result;
    printf("Digite o primeiro numero:\n");
    scanf("%d", &x);
    printf("Digite o segundo numero\n");
    scanf("%d", &y);
    result = pow(x,y);
    printf("Resultado: %d", result);
}