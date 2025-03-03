#include <stdio.h>

int main(){
//Escreva um programa em C que apresente um menu de opções 
//para a escolha do time de futebol de alguém
    int x;
    printf("1 - Flamengo\n2 - Bota Fogo\n3 - Vasco\n4 - Fluminense\n");
    scanf("%d", &x);
    printf("O time escolhido foi: %d", x);
}