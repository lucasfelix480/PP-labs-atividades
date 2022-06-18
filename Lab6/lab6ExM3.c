#include<stdio.h>
#include<stdlib.h>

int main()
{   
    int tam =4;
    int m[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    int i,j,maior;
    

    maior = m[0][0];

    for ( i = 0; i < 4; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            if(maior<m[i][j]){

                maior=m[i][j];

            }
            
        }   

    }  
    printf("o meior elemento esta loicalizado em [%d][%d]",i,j);
    return 0;
}
   