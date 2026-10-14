

typedef struct{
    
    
    int codigo;
    char nome[50];
    float preco;
    
    
}Produto;







#include <stdio.h>

int cadastrarProduto(Produto produtos[]){
   
    for(int i=0;i<3;i++){
        printf("\nDigite o nome do produto: ");
        scanf(" %49[^\n]",produtos[i].nome);
        printf("\nDigite o código do produto: ");
        scanf("%i",&produtos[i].codigo);
        printf("\nDigite o preço do produto:");
        scanf("%f",&produtos[i].preco);
        
        
    }
    return 1;
    
}
void listar(Produto listaProdutos[], int cadastro){
    if(cadastro == 0 ){
        printf("\n Não existe produto(s) cadastrado(s) atualmente");
    }else{
        
    
   printf("\n Produtos cadastrados :");
   for(int i = 0;i<3;i++){
       printf("\n Nome : %s",listaProdutos[i].nome);
        printf("\n Código : %i",listaProdutos[i].codigo);
         printf("\n Preço : %.2f",listaProdutos[i].preco);
       
       
   }
}
}
void calculo(Produto listaProdutos[], int cadastro){
    int soma =0;
    if(cadastro == 0 ){
        printf("\n Não existem produtos para efetuar a operação ");
    }else{
        for(int i=0;i<3;i++){
            soma+=listaProdutos[i].preco;
        
        }
        printf("\n Soma de todos os produtos é : %i",soma);
    }
}




int main(){
   
   
  
   
   Produto listaProdutos[3];// Essa merda é um vetor de struct
   
   int cadastroComSucesso =0;
   int opcao;
   do{
       
   
   
   printf("\nBem vindo a loja de Estoque!");
   printf("\n Escolha uma opção abaixo : ");
   printf("\n1) Cadastrar Produtos ");
   printf("\n2) Listar Produtos");
   printf("\n3) Calcular valor Total");
   printf("\n4) Sair\n");
   scanf("%i",&opcao);
   
   switch(opcao){
       case 1 :
       
       int cadastramento = cadastrarProduto(listaProdutos );
       if(cadastramento == 1   && (cadastroComSucesso = 1)){
           
           printf("\nCadastro de produtos executado com sucesso!");
       }
       
       break;
       case 2 :
       listar(listaProdutos,cadastroComSucesso);
       break;
       case 3 :
       calculo(listaProdutos,cadastroComSucesso);
       break;
       case 4:
       printf("\n -------Finalizando o sistema-------");
       break;
       default:
       printf("\n Opção Inválida");
   }
   
   }while(opcao !=4); 
}