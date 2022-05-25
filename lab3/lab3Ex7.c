#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main()
{
    float a,b;

    printf("Digite dois numeros:\n");
    scanf("%f\n %f",&a,&b);

    if (a==b)
    {
        printf("Numeros iguais\n");

    }
    if(a>b){
        printf("o maior numero eh %f\n",a);

    }
    if(b>a){
        printf("O maior numero eh %f\n",b);

    }
    return 0;
}