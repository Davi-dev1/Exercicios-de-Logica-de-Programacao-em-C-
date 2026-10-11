#include <stdio.h>


int main(){

int media;
int n[10];
for(int i=0;i<10;i++){
	
printf("Digite o valor %i : \n",i+1);
scanf("%i",&n[i]); // guarda esse cara dentro do array na posição atual
}


int maior = n[0];
int menor = n[0];
//printf("\nVoce digitou : \n");
for (int i=1;i<10;i++){
	if(n[i] >maior){
		maior = n[i];
		// se qualquer valor do array for maior  que o valor incial(0) que carregamos na linha 15, então ele assume a variavel maior;
	}
	
}
printf("\n O maior valor e : %i\n",maior);

for(int i = 1;i<10;i++){
	
	if(n[i] < menor){
		menor = n[i];
	// se qualquer valor do array for menor que o valor incial(0) que carregamos na linha 16, então ele assume a variavel menor;
}
}
printf("\n O menor valor e : %i\n",menor);



}