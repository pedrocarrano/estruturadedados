#include <stdio.h>
int main()
{
int v[5] = {1,2,3,4,5};
int *p,i;
p=v;
for(i = 0; i < 5; i++){
p = &v[i] + 1;
printf("%p ", p);
}
}
