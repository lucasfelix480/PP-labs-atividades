#include <stdio.h>
#include <stdlib.h>

int main()
{
    float V[5],menor,maior;
    int i ;
    printf("Digite o valor do vetor \n");

    for  (i = 0; i < 5; i++)
    {
        scanf("%f",&V[i]);    
    }
    menor = V[0];
    for ( i = 1; i < 5; i++)
    {
        if(menor> V[i]){
            menor= V[i];
        }
    }
    printf("o menor valor eh :%f", menor);

    maior = V[0];
    for ( i= 1; i < 5; i++)
    {
        if (maior < V[i])
        {
            maior=V[i];
        }
        
    }
    
    printf("o maior numero eh %f",maior);
    
    return 0;
}
