#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

    float salario,parcela, emprestimo;
    printf("Digite o seu salario:\n");
    scanf("%f",&salario);
    printf("Digite o valor da parcela:\n");
    scanf("%f",&emprestimo);

    parcela=(salario*20)/100;
    
    if(emprestimo>parcela){
        printf("Emprestimo nao consedido!");
    }
    else{
        printf("Emprestimo Liberado");
    }
    return 0;

}