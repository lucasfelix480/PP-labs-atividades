#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[10],B[10];
    int i,j;

    printf("Digite 10 valores para vetor:\n");

    for ( i = 0; i < 10; i++)
    {
        scanf("%d",&A[i]);

    }

    for (i = 2; i < 10; i++)
    {
        for ( j = 0; j <10; j++)
        {
            if (A[i]%i==0)
            {
             B[j]=A[i];
            }
        
        }
    }
    
    for ( j = 0; i <10; j++)
    {
        printf("%d",B[j]);
    }
    
    
    return 0;



}