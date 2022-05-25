#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int a,b,c;

    printf("Digite dois numeros inteiros: \n");
    scanf("%d \n %d", &a,&b);
    

    if (a>b)
    {
    
        printf("o maior dos numeros eh %d\n a diferenca entre eles e %d",a,a-b);
    }
    else{
        printf("o maior dos numeros eh %d\n a diferenca entre eles e %d",b,b-a);
    }



    return 0;
}