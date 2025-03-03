#include <stdio.h>
    int main ()
{
	float ht, he, vht, vhe, tot;
	printf("Digite as horas trabalhadas\n");
	scanf("%f", &ht);
	printf("Digite o valor da hora trabalhada\n");
	scanf("%f", &vht);
	printf("Digite quantas horas extras\n");
	scanf("%f", &he);
	tot = ht*vht+he;
	if(he > 0)
	{
		printf("Digite o valor das horas extras\n");
		scanf("%f", &vhe);
		tot = ht*vht+he*vhe;
	}
	printf("O salario e = %.2f", tot);
}