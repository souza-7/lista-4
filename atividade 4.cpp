#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
		int termos[20];
	
	termos[0] = 0;
	termos[1] = 1;
	for(int i = 2; i < 20; i++){
		termos[i] = termos[i-1] + termos[i-2];
	}
	
	for(int i = 0; i<20;i++) printf("%i\n", termos[i]);
	
	return 0;
}
