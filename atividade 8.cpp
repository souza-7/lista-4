#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	float anacleto = 1.50, felisberto = 1.10;
		int ultrapassagem;	
	
	do{
		anacleto = anacleto + 0.02;
		felisberto = felisberto + 0.03;
		ultrapassagem++;
	} while (anacleto > felisberto);
	
	printf("São necessários %i anos para Felisberto ficar maior que Anacleto", ultrapassagem);
	
	return 0;
}
