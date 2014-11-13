#include <stdio.h>
int a = 1, *p=&a;
float b = 2.3, *pp=&b;
char c = 'A', *ppp=&c;
int main (){

printf("Antes:\n Int:%i\n Float: %.0f\n Char: %c\n", a,b,c);
*p= 2;
*pp = 3.3;
*ppp= 'B';
printf("Depois:\n Int:%i\n Float: %.0f\n Char: %c\n", a,b,c);
return 0;
}
