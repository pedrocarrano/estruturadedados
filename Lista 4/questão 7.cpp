/*ALOCAR AREA DE MEMORIA PARA CONTER TODOS OS NUMEROS REAIS DE UMA MATRIZ 6X6, SOLICITAR OS NUMEROS E GRAVA-LOS DIRETAMENTE NA AREA ALOCADA, USANDO POINTERS.
EM SEGUIDA, COPIAR OS NUMEROS PARA A MATRIZ E CALCULAR E EXIBIR A SOMA DOS ELEMENTOS DE CADA LINHA DA MATRIZ*/

#include <stdio.h>
#include <stdlib.h>

void matriz_imprime(float *p)
{
	p = (float*)malloc(36*sizeof(float));
    float matriz[6][6];
    float soma = 0;
    int i,j;
    printf("Preencha a matriz:\n");
    for(i = 0; i < 6;i++)
    {
        for(j = 0;j < 6;j++)
        {
            printf("Matriz[%i][%i]: ",i+1,j+1);
            scanf("%f",p);
            matriz[i][j] = *p;
            p++;
        }
    }
    printf("\n");

    p = p - 36;

    for(i = 0; i < 6;i++)//EXIBE SOMA DE CADA LINHA
    {
    	soma = 0;
        for(j = 0;j < 6;j++)        
        soma = soma + matriz[i][j];
        
        printf("Soma linha %i: %.2f\n",i,soma);
        
    }
}

int main()
{
    float *p;
    matriz_imprime(p);
    free(p);
    return 0;
}
