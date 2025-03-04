#include <stdio.h>
#include <windows.h>

int main(){

    SetConsoleOutputCP(65001);

    float num;
    printf("Digite sua nota:\n");
    scanf("%f", &num);

    if(num >= 6.0){

        printf("Você foi aprovado(a)!");
    }
    else{

         printf("Você foi reprovado(a)!");
    }
}