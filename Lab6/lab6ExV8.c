#include<stdio.h>
#include<stdlib.h>

#include<stdlib.h>
#include<stdio.h>
int main(){
	int i, v1[10], j;
	
    for(i=0;i<10;i++){
		
		scanf("%d", &v1[i]);

		for(j=0;j<i; j++){
		    if(v1[i]==v1[j]){
			    printf("\nNumero repetido, entre com outro.\n");
			    i--;
		    }
	}

	}

	for(i=0;i<10;i++){
		printf("\n%d", v1[i]);
	}
	
	return 0;
}