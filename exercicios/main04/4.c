#include <stdio.h>
int main (){
	int id, cont = 0, x = 5, cont60 = 0;
	float al, pe, cont_al = 0, soma = 0, media, contps = 0, percent;
	do{
	printf("Digite a idade: ");
	scanf("%d", &id);
	printf("Digite a altura: ");
	scanf("%f", &al);
	printf("Digite o peso: ");
	scanf("%f", &pe);
	cont++;
	
	if(id>=60){
	cont60++;
	}
	
	if(id > 20 && id< 40){
		soma=soma+al;
		cont_al ++;
	}
	if(pe<50){
		contps++;
	}
	
	}
	while(cont<x);
		media = soma/cont_al;
		percent =(contps/5)*100;
		printf("Total acima de 60 anos: %.2d\n", cont60);
		printf("Media das alturas entre 20 e 40 anos: %.2f\n", media);
		printf("Porcentagem de pessoas com peso inferior: %.2f%%\n", percent);
	
	}