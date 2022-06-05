#include <stdio.h>
#include<stdlib.h>

int main()
{
    int n, num,i;
    printf("Quantos numeoros vai digitar: ");
    scanf("%d",&n);

    for ( i = 0; i < n; i++)
    {
        printf("Digite os valors :\n");
        scanf("%d",&num);
        
        if(num % 2 ==1){
            printf("%d",num);
        }
       
    }

     
    
    return 0;
}
