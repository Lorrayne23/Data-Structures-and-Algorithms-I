#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
void vetor(int *,int);
void imprime(int *,int,char *);
int elemento(int*,int,int);
/* Aluna : Lorrayne Reis
2 - Construir um programa que leia dois vetores A e B com 10 elementos quaisquer inteiros. Construir um vetor C,
sendo este o resultado da união dos elementos de A e B – sem repetição. Apresentar C.*/
int main()
{
    setlocale(LC_ALL,"portuguese");
    int vetA[10],vetB[10],vetC[20], i,tamanhoC;
    vetor(vetA,10);
    vetor(vetB,10);
    tamanhoC=0;
    for(i=0;i<10;i++)
    {
        if(!elemento(vetC,tamanhoC,vetA[i]))
        {
            vetC[tamanhoC]=vetA[i];
            tamanhoC=tamanhoC+1;
        }
    }
    for(i=0;i<10;i++)
    {
        if(!elemento(vetC,tamanhoC,vetB[i]))
        {
             vetC[tamanhoC]=vetB[i];
            tamanhoC=tamanhoC+1;
        }

    }
  printf("\n A impressão do vetor é : C\n");


  imprime(vetC,tamanhoC,"C");

    return 0;
}

void vetor(int *v,int tamanho)
{
    int i;
    for(i=0;i<tamanho;i++)
    {

    printf("\n Digite o %i termo do vetor A : ",i);
    scanf("%i",&v[i]);
    }
}
void imprime(int *v,int tamanho,char *nome)
{
    int i;
     for(i=0;i<tamanho;i++)
     {
         printf("\n %s[%d]=%i",nome,i,v[i]);
     }

}
int elemento(int *v,int tamanhoV,int element)
{
    int i=0,p=0;
    while(!p && i<tamanhoV)
    {
        if(v[i]==element)
        {
            p=1;
        }
        i=i+1;
    }
    return p;

}
