/*ALOCAR ÁREA DE MEMORIA PARA CONTER OS REGISTROS DE ATE 50 FUNCIONARIOS, CONTENDO, CADA REGISTRO:
NOME (40 CARACTERES)
QTHORAS(REAL)
SALH(REAL)
DEPTO(3CARACTERES)
MATRIC(INTEIRO)
QUANDO FOR INFORMADO MATRIC = O, FIM. SOLICITAR OS DADOS AO USUÁRIO E GUARDA-LOS USANDO POINTERS. 
EM SEGUIDA, LER TODOS OS DADOS, CALCULAR O SALTOTAL(REAL), E ARMAZENA-LO TAMBEM NO VETOR DE STRUCTS. 
AO FINAL, EXIBIR NA TELA O MAIOR SALÁROI E OS DADOS DO FUNCIONARIO QUE O RECEBE.*/


#include<stdio.h>
#include <stdlib.h>

typedef struct x
{
	char nome[40];
	float salh;
	float qthoras;	
	char depto[3];
	int matric;
	int saltotal;
} f;

    int saldo=0, soma = 0, aux=0;
   	int n, i;

int main ()
{
	f *reg;    

	printf("Quantos funcionario quer cadrastrar?");
	scanf("%i",&n);
	while (n > 50)  // Tratamento de erro
	{
		printf("O valor digitado eh invalido, digite novamente: ");
		scanf("%i", &n);
	}
	
	    reg = (f*)malloc(n*sizeof(f));
	    
		for(i=0; i<n; i++)
		{
		printf("\nMatricula: ");
		scanf("%i", &(reg[i]).matric);
			if ((reg[i]).matric == 0)
			{
				printf("ERRO!\n\n\n\n\n"); // condição da questão
			    ;
            }
			    else
			    {
				printf("Nome: ");
				scanf("%s", &(reg[i]).nome);
				printf("Quantidade de horas: ");
				scanf("%f", &(reg[i]).qthoras);
				printf("Salario: ");
				scanf("%f", &(reg[i]).salh);
				printf("Departamento: ");
				scanf("%s", &(reg[i]).depto);
				
				    if (((reg[i]).salh) > saldo)
                      {
                         saldo=((reg[i]).salh);
                         aux=i;

                   }
				       soma += ((reg[i]).salh);

			}
			          ((reg[i]).saltotal) = soma;
		}  

    printf("\Maior salario cadastrado:\n\n\n");
    printf("Nome: %s\n", (reg[aux]).nome);
    printf("Matricula: %i\n", (reg[aux]).matric);
    printf("Departamento: %s\n", (reg[aux]).depto);
    printf("Horas Trabalhadas: %.2f\n", (reg[aux]).qthoras);
    printf("Salario: %.2f\n\n\n", (reg[aux]).salh);

	return 0;

}
