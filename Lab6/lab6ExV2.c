#include <stdio.h>
#include <stdlib.h>

int main()
{
    float Vetor[8], soma =0;
    int i,x,y;
    printf("Digite o dados do vetor: \n");

    for ( i = 0; i < 8; i++)
    {
        scanf("%f",&Vetor[i]);
    }

    printf("qual posicao de x:\n");
    scanf("%d",&x);

    printf("qual posicao de y:\n");
    scanf("%d",&y);

    soma = Vetor[x]+Vetor[y];

    printf("A soma dos valores nas posicoes %d e %d eh %f", x,y,soma);
    
    return 0;
}
