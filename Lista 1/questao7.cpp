#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int frac(float num, float *inteiro, float *frac){
    
	*frac = num - floor(num);
	*inteiro = floor(num);
	

}

int main(){

	float a, b, c;

	printf("Digite um numero:\n");
	scanf("%f", &a);
	
	frac(a, &b, &c);

	printf("A parte inteira: %3.3f\n", b);		
	printf("A parte fracionaria: %3.3f\n", c);


}
