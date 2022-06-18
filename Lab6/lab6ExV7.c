#include <stdio.h>
#include <stdlib.h>

int main(){
    int v[6];
    int i,soma =0,impar;

    printf("Digite o seus dados");
    for ( i = 0; i < 6; i++)
    {
        scanf("%d",&v[i]);
    }

    for ( i = 0; i < 6; i++)
    {
        if(v[i]%2==0){
            printf("os numeros pares digitado sao: %d \n",v[i]);
        }
        if (v[i]%2==0)
        {
            soma += v[i];
            
        }

        if (v[i]%2!=0)
        {
            printf("o numeros impares sao %d \n",v[i]);
            impar++;
        }
        
        
    }
    
    printf(" a soma dos numeros pares sao %d \n", soma);
    printf("o vetor possui %d numeros impares \n", impar);
    
    return 0;
}