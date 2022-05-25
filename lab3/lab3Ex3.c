#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    float a;

    printf("Digite um numero real:\n");
    scanf("%f",&a);

    if (a>0)
    {
        a=sqrt(a);
        printf("numero positivo!\n a raiz do numero eh %f",a);

    }
    else{
        a=pow(a,2);
        printf("o numero e negativo!\n o quadrado  eh %f",a);
    }
    
    return 0;


}