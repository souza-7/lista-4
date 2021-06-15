#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int mes, dia, signo;
	
	printf("Por favor, digite um dia: ");
		scanf("%i", &dia);
	
	if(dia > 31)
		printf("Esse dia não existe!");
	else printf("Ok!\n");
	
	printf("Por favor, digite um mês: ");
		scanf("%i", &mes);
	
	if(mes > 12)
		printf("Esse mês não existe!");
	else printf("Ok!\n");
	
	if(dia <= 19) signo = 1;
		else signo = 2;
	
	if(signo == 1){
		switch(mes){
			case 1: printf("Signo: Capricórnio"); break;
			case 2: printf("Signo: Aquário"); break;
			case 3: printf("Signo: Peixes"); break;
			case 4: printf("Signo: Áries"); break;
			case 5: printf("Signo: Touro"); break;
			case 6: printf("Signo: Gêmeos"); break;
			case 7: printf("Signo: Câncer"); break;
			case 8: printf("Signo: Leão"); break;
			case 9: printf("Signo: Virgem"); break;
			case 10: printf("Signo: Libra"); break;
			case 11: printf("Signo: Escorpião"); break;
			case 12: printf("Signo: Sagitário"); break;
		}
	} else {
		switch(mes){
			case 1: printf("Signo: Aquário"); break;
			case 2: printf("Signo: Peixes"); break;
			case 3: printf("Signo: Áries"); break;
			case 4: printf("Signo: Touro"); break;
			case 5: printf("Signo: Gêmeos"); break;
			case 6: printf("Signo: Câncer"); break;
			case 7: printf("Signo: Leão"); break;
			case 8: printf("Signo: Virgem"); break;
			case 9: printf("Signo: Libra"); break;
			case 10: printf("Signo: Escorpião"); break;
			case 11: printf("Signo: Sagitário"); break;
			case 12: printf("Signo: Capricórnio"); break;
		}
	}
	
	
	return 0;
}
