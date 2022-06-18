#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int matriz[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    int  i,j,cont=0;
    
    for ( i = 0; i < 4; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            if(matriz[i][j]> 10)
            cont++;
        }
        
    }
    printf("%d",cont);
    return 0;
}
