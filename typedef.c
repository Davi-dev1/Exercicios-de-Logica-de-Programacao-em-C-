#include <stdio.h>

typedef struct{
	char nome[50];
	int idade;
	float altura;
}Pessoa;
//typedef meu tipo de dado



int main(){
	
	 Pessoa pessoa[4]; // vetor de 4 posições
	for(int i=0;i<4;i++){
	printf("---------- Pessoa %i ----------- \n",i+1);
	printf("\n---------Cadastro de Pessoa ----------\n");
	printf("\nNome : ");
	scanf(" %[^\n]",pessoa[i].nome);
	
	printf("\nIdade :");
	scanf("%i",&pessoa[i].idade);
	
	printf("\n Altura : ");
	scanf("%f",&pessoa[i].altura);
	printf("\n");
}


for(int i=0;i<4;i++){
	printf("\n --------- Dados Cadastrais ---------------\n");
	printf("\nNome : %s\n",pessoa[i].nome);
    printf("\nIdade  : %i\n",pessoa[i].idade); 
    printf("\nAltura : %.2f\n",pessoa[i].altura);
printf("\n");
}




}
