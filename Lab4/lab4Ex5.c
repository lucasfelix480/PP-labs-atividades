#include <stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    float soma = 0,valor;
    int i;

    for ( i = 1; i < 11; i++)
    {
       printf("Digite o %d valor: \n",i);
       scanf("%f",&valor);
       soma = soma + valor;
    }
    
    printf("a soma eh: %f", soma);
    return 0;
}
