#include <stdio.h>

void func(int a, int b)
{
	printf("digite A \n", a);
	scanf("%d",&a);
	printf("Digite B \n",b);
	scanf("%d",&b);	
	a=a+b;
	printf("A = %d B=%d", a,b);
}
 int main()
 
 {
  int x,y;
  func(x,y);

 }




