/*ALOCAR AREA DE MEMORIA PARA ACOMODAR 00BYTES. SOLICITAR AO USUARIO UMA STRING DE ATE ESSE TAMANHO E GUARDAR NA AREA ALOCADA. 
USANDO POINTERS, PESQUISAR A AREA ALOCADA, CALCULAR E EXIBIR QUANTAS VOGAIS FORAM ENCONTRADAS 
EXEMPLO: 'A' = 5 , 'E'=2, 'I'=3, 'O'=1,'U'=0).
EXECUTAR O PRAGRAMA ATE QUE A STRING INFORMADA PELO USUARIO PSEJA IGUAL A 'FIM'*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
void vogais(char *p)
{
    int controle = 1; //controle para a palavra fim

    while(controle != 0)
    {
        printf("Digite uma palavra");
        gets(p);
        controle = strcmp(p,"fim"); //Se p for igual a 'fim', controle = 0,executa o programa para a palavra fim e termina execucao
        int a = 0,e = 0,i = 0,o = 0,u = 0,x = 0; //A cada ciclo de palavra devemos zerar os contadores
        while(p[x] != '\0')// Enquantos nao chegamos ao caractere nulo, continua
        {
            if(p[x] == 'a')
            {
                a++;
            }
            else if(p[x] == 'e')
            {
                e++;
            }
            else if(p[x] == 'i')
            {
                i++;
            }
            else if(p[x] == 'o')
            {
                o++;
            }
            else if(p[x] == 'u')
            {
                u++;
            }
            x++;

      }
      printf("\nA=\n",a);
      printf("\nE=\n",e);
      printf("\nI=\n",i);
      printf("\nO=\n",o);
      printf("\nU=\n\n",u);

    }
}

int main()
{
	
    char *p;
    p = (char*)malloc(100); //alocando dinamicamente char com 100 bytes

    vogais(p);

    free(p);
    return 0;
}
