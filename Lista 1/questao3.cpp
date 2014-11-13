#include <stdio.h>

 int main(void)
 {
     int a, b, c;
     printf("Digite um numero");
     scanf("%d", &a);
     printf("Digite outro numero");
     scanf("%d", &b);
     printf("Digite outro numero");
     scanf("%d", &c);
     if (a > b)                                           
         if (b > c) printf("%2d%2d%2d\n", c, b, a);       
         else                                             
             if (a > c) printf("%4d%4d%4d\n", b, c, a);   
             else printf("%2d%2d%2d\n", b, a, c);         
     else                                                 
         if (b > c)                                       
             if (a > c) 
			 printf("%2d%2d%2d\n", c, a, b);   
             else 
			 printf("%2d%2d%2d\n", a, c, c);         
         else 
		 printf("%2d%2d%2d\n", a ,b, c);             
     return 0;
 
}


