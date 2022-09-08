#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
void vetor(int *,int);
void imprime(int *,int,char *);
void inverte(int *,int);
/* Aluna : Lorrayne Reis
4 - Elaborar um programa que leia 10 elementos do tipo inteiro em um vetor A. Crie um vetor ParImpar de 2 posições
e armazene no índice 0 quantos elementos de A são par e no índice 1 quantos elementos de A são ímpar. Apresentar o
vetor ParImpar. Obs.: não utilize o comando condicional se.*/
int main()
{
    setlocale(LC_ALL,"portuguese");
    int par_impar[2],vet[10],tamanho=10,i;
    vetor(vet,tamanho);
    for(i=0;i<2;i++)
    {
        par_impar[i]=0;
    }
    for(i=0;i<tamanho;i++)
    {
       par_impar[vet[i]%2]=par_impar[vet[i]%2]+1;
    }
    printf("\n Impressão dos pares : \n");
    imprime(par_impar,2,"par_impar");

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
