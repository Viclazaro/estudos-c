#include <stdio.h>
int main (){
//Construa um algoritmo que receba um número e diga se ele está
//no intervalo entre 100 e 200
int num; 
printf("Digite um numero: ");
scanf("%d", &num);
    if(num >= 100 && num <= 200){
    printf("O numero esta no intervalo");
}
    else {
        printf("O numero nao esta no intervalo");
    }
}
