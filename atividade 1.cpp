#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int d, m, ano;
	
	do{
	printf("Por favor, digite o dia: ");
		scanf("%i", &d);
	fflush(stdin);
	}while((d >= 32) || (d <= 0));
	
	do{
	printf("Por favor, digite o mês: ");
		scanf("%i", &m);
	fflush(stdin);
	}while((m >= 13) || (m <= 0));
	
	do{
	printf("Por favor, digite o ano: ");
		scanf("%i", &ano);
	fflush(stdin);
	}while((ano < 0) || (ano > 5000));
	
	if(ano mod 4 <> 0)
		printf("Ano não bissexto");
	else if((ano mod 100 = 0) && (ANO mod 400 = 0))
		printf("Ano bissexto");
    else printf("Ano não bissexto");

	
	
	
	return 0;
}
