#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int numeroPar, qntNumero, media, i;
	
	printf("Informe quantos números serão calculados: ");
		scanf("%i", &qntNumero);
	
	for(i=0; i<qntNumero; i++){
	
	do{
	printf("Por favor, informe o número PAR: ");
		scanf("%i", &numeroPar);
	}while(numeroPar/3
	);
	}
	
	return 0;
}

