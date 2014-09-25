#include<stdio.h>


float a, b, mp, ma;

void le_notas(){
	
	printf("Digite a primeira nota:");
	scanf("%f",&a);
	printf("Digite a outra nota:");
	scanf("%f",&b);
}

void calc_media(){

	ma = (a+b)/2;	
	mp = (a+(2*b))/3;
}

void exibe_dados(){

	printf("A = %2.1f\n", a);
	printf("B = %2.1f\n", b);
	printf("Media Aritmerica = %2.2f\n", ma);
	printf("Media Ponderada = %2.3f\n", mp);

}

int main(){

	le_notas();		
	calc_media();	
	exibe_dados();
	
}
