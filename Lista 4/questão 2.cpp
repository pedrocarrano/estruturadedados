/*ALOCAR 3 AREAS DE MEMORIA PARA CONTER, CADA UMA, OS DADOS DE 1 ATE 40 ALUNOS, QUE SAO DESCRITOS POR MEIO DE:
RGM (INT)
CURSO(30 CHAR)
SEMESTRE (INT)
ANOINICIO(INT).
SOLICITAR OS DADOS E GUARDA-LOS SEPARADAMENTE, POR CURSO. (OS CURSOS SAO ADM, ENG, MED) USANDO POINTERS.
(OU SEJA, IDENTIFICAR O CURSO E GUARDAR OS DADOS DOS ALUNOS DENTRO DA AREA RESERVADA PARA AQUELE CURSO*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct
{
	int rgm;
	char curso[30];
	int semestre;
	int anoinicio;
	char *pt;

} aluno;

int main (void)
{
	char *pt2;
	aluno *adm;
    adm = (aluno*)malloc(40*sizeof(aluno));
	aluno *eng;
	eng = (aluno*)malloc(40*sizeof(aluno));
	aluno *med;
	med = (aluno*)malloc(40*sizeof(aluno));

	int n, i;
	
	//printf("Digite a quantidade de Alunos que quer cadrastrar "); 
	//scanf("%d", &n);
	
	printf("Digite o curso do ALUNO: ");
       
	    for(i=0; i<120 ; i++){
			
		scanf("%d", &pt2);
	
		if(strcmp(pt2,"ADM") == 0)
	{
		printf("Curso: ");
		scanf("%s", adm->pt = pt2);
		printf("RGM: ");
		scanf("%i",&(adm[i]).rgm);
		printf("Ano de inicio: ");
		scanf("%i",&(adm[i]).anoinicio);
		printf("Semestre: ");
		scanf("%i",&(adm[i]).semestre);
	}

	
	free(adm);
	free(eng);
	free(med);

	return 0;}}
	

