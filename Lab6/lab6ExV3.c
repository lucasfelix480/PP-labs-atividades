#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Vetor[6];
    int i;
    printf("Digite o dados do vetor: \n");

    for ( i = 0; i < 6; i++)
    {
        scanf("%d",&Vetor[i]);
    }

    printf("o vetor na ordem inversa eh: \n");

    for ( i = 5; i >= 0; i--)
    {
        printf("%d",Vetor[i]);
    }
    
    return 0;
}
