#include <stdio.h>
#include <windows.h>

int main(){

    SetConsoleOutputCP(65001);

    int i, u;
    printf("Digite um número:\n");
    scanf("%d", &u);

    for (i = u; i >= 0; i--){
        
        printf("%d\n", i);

    }
    
    return 0;
}
