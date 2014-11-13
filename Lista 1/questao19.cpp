#include <stdio.h>
int main(void)
{
int v[5], i;
int *p = v ;
    printf("Digite 5 numeros:\n");
    scanf("\n%i\n%i\n%i\n%i\n%i",&v[0],&v[1],&v[2],&v[3],&v[4]);
       for(i = 0; i < 5; i++){
         *(p + i) *= 2;
          printf("%i ", v[i]);
}

}
