#include <stdio.h>
#include <windows.h>

int main (){

    SetConsoleOutputCP(65001);

    int n;
    scanf("%d", &n);
    while(n < 10){
        printf("Teste\n");
        n++; 
    }
}