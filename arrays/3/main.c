#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
void vetor(float *,int);
void imprime(float *,int,char *);
void inverte(float*,int);
/* Aluna : Lorrayne Reis
3 - Elaborar um programa que leia 20 elementos do tipo real em um vetor A, em seguida crie um procedimento que
inverta os elementos armazenados. Ou seja, o primeiro elemento de A passará a ser o ultimo, o segundo elemento
passará a ser o penúltimo e assim por diante. Apresentar A.*/
int main()
{
    setlocale(LC_ALL,"portuguese");
    float vetA[20];
    int tamanho=20;
    vetor(vetA,tamanho);
    printf("\n Valores de A :");
    imprime(vetA,tamanho,"A");
    inverte(vetA,tamanho);
    printf("\n Vetor A invertido : ");
    imprime(vetA,tamanho,"A");


    return 0;
}
void vetor(float *v,int tamanho)
{
    int i;
    for(i=0;i<tamanho;i++)
    {

    printf("\n Digite o %i termo do vetor A : ",i);
    scanf("%f",&v[i]);
    }
}
void imprime(float *v,int tamanho,char *nome)
{
    int i;
     for(i=0;i<tamanho;i++)
     {
         printf("\n %s[%d]=%.2f",nome,i,v[i]);
     }

}
void inverte(float *v,int tamanho)
{
    int i,meio;
    float auxiliar;
    meio=tamanho/2;
    for(i=0;i<meio;i=i+1)
    {
        auxiliar=v[i];
        v[i]=v[tamanho-i-1];
        v[tamanho-i-1]=auxiliar;
    }


}
