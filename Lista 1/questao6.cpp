#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int raizes(float a, float b, float c, float *x1, float *x2){

	float raiz, delta;
	
	delta = (b*b)-(4*a*c);
	
	if(delta < 0){
		return 0;
		
	}	
	else{	
		raiz = sqrt(delta);

		*x1 = ((-b) + raiz )/ (2 * a); 
		*x2 = ((-b) - raiz )/ (2 * a);
		
		printf("Valor de X1= %3.1f\n", *x1);
	    printf("Valor de X2= %3.1f\n", *x2);
	    
		if (*x1 == *x2)
			return 1;	
		else 
			return 2;
		
	}
}

int main(){


	float a, b, c, x1, x2;
	int  result;

	printf("Valor de A = ");
	scanf("%f",&a);	
	printf("Valor de B = ");
	scanf("%f",&b);
	printf("Valor de C = ");
	scanf("%f",&c);

	
	result= raizes(a, b, c, &x1, &x2);

	printf("Quantidade de raízes: %d\n", result);
	
	

}
