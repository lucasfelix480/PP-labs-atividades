#include <stdio.h>
#include <stdlib.h>

int main(){

    int v[50];
    int i;

    for ( i = 0; i < 50; i++)
    {
        v[i]=(i+(5*i))%(i+1);
    }
    for ( i = 0; i < 50; i++)
    {
        printf("%d \n",v[i]);
    }
    


    return 0;
    
}