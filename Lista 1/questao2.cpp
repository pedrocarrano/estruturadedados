#include <stdio.h>
int main() 
{
	int a,b,maior, menor;
printf("Digite A\n", a);
scanf("%d",&a);
printf("Digite B\n", b);
scanf("%d",&b);

if (a>b){ 
  printf("Maior A\n", a);
  printf("Menor B\n", b);

}
   else if (b>a){
     printf("Maior B\n", b);
     printf("Menor A\n", a);
}
   else
   printf("Numeros iguais");
return(0);
}

