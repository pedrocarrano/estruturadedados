#include <stdio.h>
int main()
{
int a,b;
printf("Digite 2 numeros:\n");
scanf("%d%d", &a,&b);
if (&a>&b)
printf("O maior endereco: A = %p", &a);
else
printf("O maior endereco: B = %p", &b);
return 0;
}
