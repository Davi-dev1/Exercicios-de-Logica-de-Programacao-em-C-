#include <stdio.h>

float celsiusParaFahrenheit(float Celsius){
float f = (Celsius * 1.8   ) + 32;
return f;
}


int main(){


float Celsius;
printf("Digite uma Temperatura: "); 
scanf("%f",&Celsius);   
float conversor = celsiusParaFahrenheit(Celsius);
printf("A temperatura em Fhrenheit é : %.2f °c",conversor);


}