/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>


typedef struct{
    char nome[50];
    int matricula;
    float nota;
}Aluno;


int main()
{
   Aluno aluno1;
   printf("\n Digite seu nome ");
   scanf(" %49[^\n]",&aluno1.nome);
    printf("\n Digite sua matricula ");
    scanf("%i",&aluno1.matricula);
    printf("\nDigite sua nota ");
    scanf("%f",&aluno1.nota);
    
    
   
    printf("\n == Dados do Aluno == ");
	printf("\n Nome : %s\n ",aluno1.nome);
	printf("\n Matricula : %i\n ",aluno1.matricula);
	printf("\n Nota : %.2f",aluno1.nota);
    

}
