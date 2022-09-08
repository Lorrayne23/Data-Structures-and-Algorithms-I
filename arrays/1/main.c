#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
void vetor(int *,int);
void imprime(int *,int,char *);
int fatorial(int);
/* Aluna : Lorrayne Reis
1 - Elaborar um programa que leia um vetor A com 15 elementos inteiros. Construir um vetor B do mesmo tipo, em
que cada elemento de B deva ser o resultado do fatorial correspondente de cada elemento da matriz A. Apresentar A e
B.*/
int main()
{
    setlocale(LC_ALL,"portuguese");
    int vetA[15],vetB[15],i;
    vetor(vetA,15);

    for(i=0;i<15;i=i+1)
    {
        vetB[i]=fatorial(vetA[i]);
    }
    imprime(vetB,15,"B");
    printf("\n Tabela de fatorial :\n");
    printf("\n Número Fatorial : \n");
    for(i=0;i<15;i=i+1)
    {
        printf(" %2d  %8d\n",vetA[i],vetB[i]);
    }


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
int fatorial(int num)
{
    int i,fat;
    fat=1;
        for(i=1;i<=num;i++)
        {
            fat*=i;

        }
        return fat;
}
