#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main(){
    
    float nota1,nota2,media;

    printf("digite duas notas do aluno\n");
    scanf("%f\n %f", &nota1,&nota2);

    if(nota1>=0 && nota1<=10.00 && nota2>=0 && nota2<=10.00){
        media=(nota1+nota2)/2;
        printf("a media das notas sao %f",media);

    }
    else{
        printf("as notas nao sao validadas");
    }

    return 0;

}