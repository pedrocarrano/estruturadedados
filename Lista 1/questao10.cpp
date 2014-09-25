#include <stdio.h>
#include <stdlib.h>

int somadobro(int x, int y)
{
	int z;
	x=x*2;
	y=y*2;
	z=y+x;
	printf("%d",z);
    
}
     
 int main()
 {
    int a,b;
    printf("Digite dois numeros\n", a,b);
    scanf("%d%d",&a,&b);
    printf("O dobro:\n");
    somadobro(a,b);
    
}



