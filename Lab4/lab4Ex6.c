#include <stdio.h>
#include<stdlib.h>

int main()
{
    int soma = 0,valor, media;
    int i;

    for ( i = 1; i < 11; i++)
    {
       printf("Digite o %d valor: \n",i);
       scanf("%d",&valor);
       soma = soma + valor;
    }
    
    media=soma/10;
    printf("a media eh: %d", media);
    return 0;
}
