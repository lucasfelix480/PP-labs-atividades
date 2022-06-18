#include<stdio.h>
#include<stdlib.h>


int main()
{   
    
    int m[5][5]= {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};
    int num;
    int i,j;
    
    printf("Qual o valor esta procuranod na matriz: \n");
    scanf("%d",&num);

    

    for ( i = 0; i < 5; i++)
    {
        for ( j = 0; j < 5; j++)
        {
           if (num == m[i][j])
           {
                printf("o valor digitado esta localizado em [%d][%d]",i,j);
                
           }
          
            if(num!=m[i][j]){
                printf("Dado nao emcontrato");
           }
        }   

        
    }  
    
    return 0;
}
   