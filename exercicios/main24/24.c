#include <stdio.h>
#include <windows.h>

int main (){

    SetConsoleOutputCP(65001);

    //tabuada
    int n, i, result;
    printf("Digite um número inteiro:\n");
    scanf("%d", &n);

    for ( i = 0; i <= 10; i++)
    {
        result = i * n;
        printf("%d x %d = %d\n", n,  i, result);
    }
    
}