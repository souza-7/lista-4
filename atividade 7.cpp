#include<stdio.h>
#include<locale.h>
#include<ctype.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	float altura, maiorAltura, menorAltura, alturaMedia, alturaFeminina;
	char sexo;
	int pessoas, homens, mulheres, nada, contadorDeMulheres;
	
	for(pessoas=0; pessoas<2; pessoas++){
		printf("Digite o sexo da %dº pessoa (M - Masculino F - Feminino): ", pessoas + 1);
		scanf("%c", &sexo);
		sexo = toupper(sexo);
		fflush(stdin);
	if (sexo == 'M') 
		homens++; 
	else if (sexo == 'F') 
		mulheres++; 
	else 
		nada++;
		
	if(sexo == 'F'){
			alturaFeminina = alturaFeminina + altura;
			contadorDeMulheres = contadorDeMulheres + 1;
		}
		
		printf("Digite a altura da %dº pessoa: ", pessoas + 1);
		scanf("%f", &altura);
		fflush(stdin);
		
	if(altura > maiorAltura) maiorAltura = altura;
	if(altura < menorAltura) menorAltura = altura;
	}
	
	alturaMedia = alturaFeminina / contadorDeMulheres;
	
	printf("Maior altura: %.2f\n", maiorAltura);
	printf("Menor altura: %.2f\n", menorAltura);
	printf("Media de altura do sexo feminio: %.2f\n", alturaMedia);

	
	return 0;
}
