#include <stdio.h>
#include <windows.h>

int main(){

    SetConsoleOutputCP(65001);

    int x = 4;
    printf("Dado antes do incremento: %d \n", x);

    x++;
    printf("Dado após o incremento: %d \n", x);

    x--;
    printf("Após decremento: %d \n", x);

    x+= 2;
    printf("Após o incremento de 2 unidades: %d \n", x);

    x-= 2;
    printf("Após o decremento de 2 unidades: %d \n", x);

    x*= 10;
    printf("Após multiplicar por 10: %d \n", x);

    x/= 2;
    printf("Após dividir por 2: %d \n", x);
}