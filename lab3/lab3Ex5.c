#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a;

    printf("digite um  numero inteiro:\n");
    scanf("%d",&a);

    if(a%2==0){
        printf("o numero %d e par!",a);

    }

    else{
       printf("o numero %d e impar!",a); 
    }

    return 0;

}