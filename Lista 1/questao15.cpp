#include <stdio.h>
int main()
{
int a,b;
a = 10;
b = 20;
if (&a>&b)
printf("O maior endereco: A = %p", &a);
else
printf("O maior endereco: B = %p", &b);
return 0;
}
