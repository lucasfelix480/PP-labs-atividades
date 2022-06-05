#include <stdio.h>
#include<stdlib.h>

int main()
{
    const k =1000;
    int i=0;

    while (i<=100000)
    {
        printf("%d \n",i);
        i=i+k;
    }
    
    return 0;
}
