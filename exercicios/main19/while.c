#include <stdio.h>
#include <windows.h>

int main (){

    SetConsoleOutputCP(65001);

    int i = 0; //variavel inicial
    while(i <= 10){ //condição
        printf("%d\n", i); //imprimir 
        i++; //incremento
    }
    
}