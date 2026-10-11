#include <stdio.h>
int main(){
    
    int n;
    int result=0;
    printf("Digite um número");
    scanf("%i",&n);
    
for(int i = 0; i<10;i++){
    result= i*n;
    printf("\n %i * %i = %i", i,n,result);
    
   

}


}