#include<stdio.h>
#include<stdlib.h>


int main()
{
    int a,b;

    printf("digite dois valores:\n");
    scanf("%d \n%d",&a,&b);

    if(a>b){

        printf("o maior numero eh: %d", a);

    }
    else{

        printf("o maior numero eh: %d", b);
    }
    return 0;

}