#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
		int dado1, dado2, possibilidades;

	for(dado1 = 1; dado1<7;dado1++){
	for(dado2 = 1; dado2<7;dado2++){
		if(dado1 + dado2 == 7) {
			printf("%i + %i = 7\n", dado1, dado2);	
			possibilidades++;
			}
		}
	}
	
	printf("\nO número de possibilidades da soma dos dois dados dar 7 são: %i", possibilidades);
	
	return 0;
}

