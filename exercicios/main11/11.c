#include <stdio.h>

int main(){
//versão refeita do exercicio 10
    int x;
    printf("1 - Flamengo\n2 - Bota Fogo\n3 - Vasco\n4 - Fluminense\n");
    scanf("%d", &x);
    switch (x)
    {
    case 1:
    printf("Voce escolheu Flamengo!"); break;

    case 2:
    printf("Voce escolheu Bota Fogo!"); break;

    case 3: 
    printf("Voce escolheu Vasco!"); break;

    case 4:
    printf("Voce escolheu Fluminense!"); break;
    
    default:
    printf("Escolha invalida. Tente novamente.\n"); break;
    }

    return 0;
}