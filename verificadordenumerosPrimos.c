/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>



int ehprimo(int n){
    if(n<=1){
            return 0;
    }
    
    for(int i=2; i < n; i++){
        if(n % i == 0){
            return 0;
        
        }
    
        }
        return 1;
    } 
    


int main()
{
    
    int n;
    printf("\nDigite um número:");
    scanf("%i",&n);
    int verificador = ehprimo(n);
   if(verificador == 1){
       printf("%i É primo retorno 1  ",n);
       
   }else{
       printf("%i Não é primo retorno 0  ",n);
   }
    
    
    
}