#include <stdio.h>

int main(){
//Construa um algoritmo que leia dois valores inteiros distintos e
//informe qual é o maior

    int x, y;
    printf("Digite dois numeros:\n");
    scanf("%d %d", &x, &y);
    if(x>y){
        printf("%d e maior", x);
    }

    else if(y > x){
        printf("%d e maior", y);
    } 

    else{
        printf("os numeros sao iguais");
    }

}