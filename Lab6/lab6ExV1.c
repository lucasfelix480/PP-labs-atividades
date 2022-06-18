#include <stdio.h>
#include <stdlib.h>

int main(){

    int A[6];
    int i,soma=0;

    for ( i = 0; i < 6; i++)
    {
        scanf("%d",&A[i]);
        printf("%d\n",A[i]);
    }

    soma = A[0]+A[1]+A[5];
    printf("%d \n",soma);

    A[4]=100;

    for ( i = 0; i <6; i++)
    {
        printf("%d\n",A[i]);
    }
    
    

    return 0;

}