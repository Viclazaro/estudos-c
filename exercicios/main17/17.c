#include <stdio.h>
#include <windows.h>

int main(){

    SetConsoleOutputCP(65001);

    int i, n, result;
    printf("Digite um número:\n");
    scanf("%d", &n);

    for ( i = 0; i <= 10; i++){

    result = n + i;

    printf("%d + %d = %d\n", n, i, result );
    }
    
}