#include<stdio.h>
#include<stdlib.h>
int main(){
float vetor[3][3], *v;
int i,j;
i=0;	
  for (i=1; i<4;i++){	
  for(j=0;j<3;j++){
     v = &vetor[i][j];	
     printf("%p\n", v);
       }	
    }
}
