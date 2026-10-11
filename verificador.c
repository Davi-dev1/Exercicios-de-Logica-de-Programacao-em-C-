#include <stdio.h>

int main(){


int senha = 9999;

int codigoUsuario = 1234;


printf("\nDigite seu codigo aqui : \n");
scanf("%i",&codigoUsuario);

printf("\nDigite sua senha : \n");
scanf("%i",&senha);

while(senha != 9999 || codigoUsuario != 1234){
printf("Por favor dados errados digite novamente");


printf("\nDigite seu codigo aqui : \n");
scanf("%i",&codigoUsuario);

printf("\nDigite sua senha : \n");
scanf("%i",&senha);
}
printf("Dados corretos\n");





}