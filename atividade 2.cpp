#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int mes, dia, signo;
	
	printf("Por favor, digite um dia: ");
		scanf("%i", &dia);
	
	if(dia > 31)
		printf("Esse dia n�o existe!");
	else printf("Ok!\n");
	
	printf("Por favor, digite um m�s: ");
		scanf("%i", &mes);
	
	if(mes > 12)
		printf("Esse m�s n�o existe!");
	else printf("Ok!\n");
	
	if(dia <= 19) signo = 1;
		else signo = 2;
	
	if(signo == 1){
		switch(mes){
			case 1: printf("Signo: Capric�rnio"); break;
			case 2: printf("Signo: Aqu�rio"); break;
			case 3: printf("Signo: Peixes"); break;
			case 4: printf("Signo: �ries"); break;
			case 5: printf("Signo: Touro"); break;
			case 6: printf("Signo: G�meos"); break;
			case 7: printf("Signo: C�ncer"); break;
			case 8: printf("Signo: Le�o"); break;
			case 9: printf("Signo: Virgem"); break;
			case 10: printf("Signo: Libra"); break;
			case 11: printf("Signo: Escorpi�o"); break;
			case 12: printf("Signo: Sagit�rio"); break;
		}
	} else {
		switch(mes){
			case 1: printf("Signo: Aqu�rio"); break;
			case 2: printf("Signo: Peixes"); break;
			case 3: printf("Signo: �ries"); break;
			case 4: printf("Signo: Touro"); break;
			case 5: printf("Signo: G�meos"); break;
			case 6: printf("Signo: C�ncer"); break;
			case 7: printf("Signo: Le�o"); break;
			case 8: printf("Signo: Virgem"); break;
			case 9: printf("Signo: Libra"); break;
			case 10: printf("Signo: Escorpi�o"); break;
			case 11: printf("Signo: Sagit�rio"); break;
			case 12: printf("Signo: Capric�rnio"); break;
		}
	}
	
	
	return 0;
}
