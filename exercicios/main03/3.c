#include <stdio.h>
int main()
{
	float tot, sal;
	printf("Qual e sua faixa salarial?");
	scanf("%f", &sal);
	if(sal<1000)
	{
		printf("Seu salario corresponde a aliquota de isento\n");
		tot=0;
	}
			else if(sal>=1000 && sal<3000)
		    	{
		    	printf("Seu salario corresponde a aliquota de 10 na tabela\n");
		    	tot= 0+(sal-1000)*0.10;
		    	}
			    else if(sal>=3000 && sal<5000)
				{
					printf("Seu salario corresponde a aliquota de 15 na tabela\n");
					tot= 0+(3000-1000)*0.10+(sal-3000)*0.15;
				}
		    	else if(sal>5000)
				{
					printf("Seu salario corresponde a aliquota de 20 na tabela\n");
					tot= 0+(3000-1000)*0.10+(5000-3000)*0.15+(sal-5000)*0.20;
				}
	printf("O imposto a ser pago e =\n %.2f", tot);
}