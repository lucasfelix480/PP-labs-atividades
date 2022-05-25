#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    float a;

    printf("Digite o seu dado:\n");
    scanf("%f",&a);

    if(a>0){
        a = sqrt(a);
        printf(" a raiz quadrada do seu dado eh:%f",a);
    }
    else{
        printf("o dado nao e valido");
    }

    return 0;


}