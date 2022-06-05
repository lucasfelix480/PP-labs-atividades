#include <stdio.h>
#include<stdlib.h>

int main()
{
    int i;

    for ( i = 4;  i < 20; i++)
    {
    
        if ((i % 3)==0)
        {
            printf("%d ,",i);
        }
     
    }
    

    return 0;

}