#include <stdio.h>

int main(){

    int n, i;
    printf("Quantos numeros voce vai digitar?:\n");
    scanf("%d", &n);

    float v[n];
    for ( i = 0; i < n; i++)
    {
        printf("Digite um numero:\n");
        scanf("%f", &v[i]); // armazena no vetor
    }
    printf("Numeros digitados:\n");
    for( i = 0; i < n; i++){
        printf("%f\n", v[i]); // imprime os numeros
    }
}
    
