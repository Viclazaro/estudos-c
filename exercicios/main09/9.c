#include <stdio.h>
#define texto "Entrada e saida de dados."

int main(){

    printf("%s\n", texto);

    int idade = 0;
    float altura = 0;
    char nome[50] = "";

    printf("Digite seu nome:\n");
    scanf("%s", nome);
    printf("Digite sua idade:\n");
    scanf("%d", &idade);
    printf("Digite sua altura:\n");
    scanf("%f", &altura);

    printf("Nome: %s\nIdade: %d\nAltura: %.2f", nome, idade, altura);

    return 0;
}