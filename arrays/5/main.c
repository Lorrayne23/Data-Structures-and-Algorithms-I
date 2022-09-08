#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
void vetor(int *,int);
void imprime(int *,int,char *);
void classifica(int*,int);
/* Aluna : Lorrayne Reis
5 - Elaborar um programa que leia 10 elementos do tipo inteiro em um vetor A. Ordene e imprima o vetor A.*/
int main()
{
    setlocale(LC_ALL,"portuguese");
    int vetA[10],tamanho=10,i;
    vetor(vetA,tamanho);
    printf("\n Antes da classificação : ");
    imprime(vetA,tamanho,"A");
    classifica(vetA,tamanho);
    printf("\n Depois da classificação : ");
    imprime(vetA,tamanho,"A");


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
void classifica(int *v,int tamanho)
{
    int i,auxiliar,p;
    for(i=0;i<tamanho;i++)
    {
        for(p=i;p<tamanho;p++)
        {
            if(v[i]>v[p])
               {
                   auxiliar=v[i];
                    v[i]=v[p];
                    v[p]=auxiliar;

               }
        }
    }
}

