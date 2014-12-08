/*ALOCAR AREA DE MEMORIA PARA ACOMODAR 40 NUMEROS INTEIROS. SOLICITAR AO USUARIO 8 NUMEROS INTEIROS E PREENCHER UMA MATRIZ 2X4. 
EM SEGUIDA, USANDO POINTERS, COPIAR OS NUMEROS DA MATRIZ PARA A AREA ALOCADA. SOLICITAR NOVOS 8 NUMEROS AO USUARIO, VOLTAR A PREENCHER
A MATRIZ E CONTINUAR PREENCHENDO A AREA ALOCADA( ESSE PROCEDIMENTO DEVERÁ SER REALIZADO 5 VEZES)*/

#include <stdio.h>
#include <stdlib.h>


void matriz(int *p)
{
	
    int n,i,j;
    int matriz[2][4];
    for(n = 0; n < 5; n++)
    {
        printf("Preencha a matriz de inteiros %i:\n",n+1);
        for(i = 0; i < 2;i++)
        {
            for(j = 0;j < 4;j++)
            {
                 printf("Matriz[%i][%i]: ",i+1,j+1);
                 scanf("%i",&matriz[i][j]);
                 *p = matriz[i][j];
                 p++;
            }
        }
        printf("\n");

    }
    p -= 40;
}

int main()
{
    
    

    matriz(p);    

    free(p);
    return 0;
}
