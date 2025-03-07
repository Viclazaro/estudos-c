#include <stdio.h>
#include <windows.h>

int main(){

    SetConsoleOutputCP(65001);

    int x = 0;
    printf("Digite um número:\n");
    scanf("%d", &x);

    while(x <= 10){
        printf("%d\n", x);
        x++;
    }

}