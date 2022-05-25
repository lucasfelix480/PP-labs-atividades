#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{   
    float a;

    printf("digite um numero:\n");
    scanf("%f",&a);

    if (a>0)
    {
        printf("o quadrado  de %.2f eh %.2f\n", a, pow(a,2));
        printf("a raiz quadrada de %.2f eh %.2f\n",a,sqrt(a));
    }
    else{
        printf("Numero invalido");
    }




    return 0;

}