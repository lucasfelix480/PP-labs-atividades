#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    float alt,hom,mulh;
    char sexo;
    

    printf("Qual o seu sexo\n Digite M para masculino \n Digite F para feminino\n");
    scanf("%c",&sexo);
    printf("Digite a sua altura \n");
    scanf("%f",&alt);

    if(sexo =='m'|| sexo=='M'|| sexo=='F'|| sexo=='f'){
        if(sexo='m'|| sexo== 'M'){
            hom=(72.7*alt)-58.8;
            printf("o seu peso ideal para um Homem  com a sua altura eh %f",hom);
        }
        else{
            mulh=(62.1*alt)-44.7;
            printf("o seu peso ideal para uma Mulher com a sua altura eh %f",mulh);
        }
    }
    else{
        printf("Dados invaidos! FIM DO PROGRAMA");
    }

    return 0;
}