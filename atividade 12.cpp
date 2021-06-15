#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int candidato1, candidato2, candidato3, candidato4, voto, votoNulo, votoEmBranco, totalVotos;
	
	do{
		printf("Digite o número do candidato que você queira votar: ");
			scanf("%i", &voto);
		
		switch(voto){
			case 0: break;
			case 1: candidato1++; break;
			case 2: candidato2++; break;
			case 3: candidato3++; break;
			case 4: candidato4++; break;
			case 5: votoNulo++; break;
			case 6: votoEmBranco++; break;
		default: printf("Esse número não está no nosso sistema!\n");
		}
	}while(voto !=0);
	
	totalVotos = votoEmBranco + votoNulo +candidato1 + candidato2 + candidato3 + candidato4;
	
	float porcentagemVotosCandidato1 = candidato1 * 100 / totalVotos;
	float porcentagemVotosCandidato2 = candidato2 * 100 / totalVotos;
	float porcentagemVotosCandidato3 = candidato3 * 100 / totalVotos;
	float porcentagemVotosCandidato4 = candidato4 * 100 / totalVotos;
	float porcentagemVotosBranco = votoEmBranco * 100 / totalVotos;
	float porcentagemVotosNulos = votoNulo * 100 / totalVotos;
	
	printf("--------Resultado Eleições--------\n\n");
	printf("Candidato 1: votos: %i, porcentagem: %.2f%%\n", candidato1, porcentagemVotosCandidato1);
	printf("Candidato 2: votos: %i, porcentagem: %.2f%%\n", candidato2, porcentagemVotosCandidato2);
	printf("Candidato 3: votos: %i, porcentagem: %.2f%%\n", candidato3, porcentagemVotosCandidato3);
	printf("Candidato 4: votos: %i, porcentagem: %.2f%%\n", candidato4, porcentagemVotosCandidato4);
	printf("Votos nulos: votos: %i, porcentagem: %.2f%%\n", votoNulo, porcentagemVotosNulos);
	printf("Votos em branco: votos: %i, porcentagem: %.2f%%\n", votoEmBranco, porcentagemVotosBranco);
	
	
	
	return 0;
}
