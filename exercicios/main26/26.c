#include <stdio.h>

int main(){

    int v[3], i;
    
    for ( i = 0; i < 3; i++)
    {
        printf("Digite um numero:\n");
        scanf("%d", &v[i]);
    }
    printf("Numeros inseridos:\n");
    for ( i = 0; i < 3; i++)
    {
       printf("%d\n", v[i]);
    }
    return 0;
}
    