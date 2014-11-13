#include <stdio.h>
int main() 
{
	int a,b,aux;
printf("Digite A \n", a);
scanf("%d",&a);
printf("Digite b \n", b);
scanf("%d",&b);
    aux = a;
    a = b;
    b = aux;

printf("A = %d \n",a);
printf("B = %d", b);
}

