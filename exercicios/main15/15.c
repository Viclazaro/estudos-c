#include <stdio.h>
#include <windows.h>

int main(){

    SetConsoleOutputCP(65001);
//Escreva um programa que indique quantos segundos tem um 
//determinado número de horas

    float h, sec;
    printf("Insira o número de horas:\n");
    scanf("%f", &h);

    sec = h*60*60;

    printf("Segundos: %.2f", sec);

}        