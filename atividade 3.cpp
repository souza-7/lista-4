#include<stdio.h>
#include<locale.h>
#include<string.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	char pais[20];
	int medalha, ouro, bronze, prata, i=0, pontuacao;
	
	for(i=0; i<3; i++){
	
	printf("Por favor, informe o nome do pa�s: ");
		fgets(pais,20,stdin);
	fflush(stdin);
	
	printf("Por favor, informe a quantidade de medalhas que o pa�s ganhou: ");
		scanf("%i", &medalha);
	fflush(stdin);
	
	printf("Por favor, informe quantas medalhas de ouro que o pa�s ganhou: ");
		scanf("%i", &ouro);
	fflush(stdin);
	
	printf("Por favor, informe quantas medalhas de prata que o pa�s ganhou: ");
		scanf("%i", &prata);
	fflush(stdin);
	
	printf("Por favor, informe quantas medalhas de bronze que o pa�s ganhou: ");
		scanf("%i", &bronze);
	fflush(stdin);
	
	pontuacao=(ouro*3) + (prata*2) + (bronze);
	printf("Pontua��o total: %d", pontuacao);
		scanf("%i", &pontuacao);	
	fflush(stdin);
	}
	
	
	return 0;
}
