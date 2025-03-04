#include <stdio.h>
#include <windows.h>

    int main()
    {
    SetConsoleOutputCP(65001);

	int x; 
	printf("Escolha um mês:\n1 - Janeiro\n2 - Fevereiro\n3 - Marco\n4 - Abril\n5 - Maio\n6 - Junho\n7 - Julho\n8 - Agosto\n9 - Setembro\n10 - Outubro\n11 - Novembro\n12 - Dezembro\n");
	scanf("%d", &x);
	switch(x){

		case 1:
		printf("Janeiro possui 31 dias"); break;

		case 2:
		printf("Fevereiro possui 28 dias"); break;

		case 3:
		printf("Março possui 31 dias"); break;

		case 4:
		printf("Abril possui 30 dias"); break;

		case 5:
		printf("Maio possui 31 dias"); break;

		case 6:
		printf("Junho possui 30 dias"); break;

		case 7:
		printf("Julho possui 31 dias"); break;

		case 8:
		printf("Agosto possui 31 dias"); break;

		case 9: 
		printf("Setembro possui 30 dias");break;

		case 10:
		printf("Outubro possui 31 dias"); break;

		case 11:
        printf("Novembro possui 30 dias"); break;

        case 12:
        printf("Dezembro possui 31 dias"); break;

        default:
        printf("Tente novamente");
		
	}
}