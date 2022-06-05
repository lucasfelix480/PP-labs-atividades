#include <stdio.h>
#include<stdlib.h>

int main()
{
    int i;
    int j=1;
    int k=1;
    printf("usando for ");

    for ( i = 1; i <= 100; i++)
    {
       printf("%d ,",i);
    }
    printf("usando while");
    while (j<101)
    {   
       
        printf("%d ,",j);
        j++;
    }
    printf("usando do while");
    do
    {
       printf("%d ,",k);
       k++;
    } while (k<101);
    
    


    return 0;
}