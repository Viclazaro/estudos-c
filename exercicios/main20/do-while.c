#include <stdio.h>

int main(){

    int i=1; //inicialização

    do{ //executa bloco de comando "dê um passo"
        printf("%d\n", i);
        i++; //incremento
    }while(i <= 10); //condição - "se não chegou ao destino, continue"
    
}