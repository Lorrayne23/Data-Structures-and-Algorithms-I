#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
int descobrindoValores(int numero);
int n,denominador,numerador,sinal,i;
int a, b, auxiliar;
float h,fracao;

int main()
{
     setlocale(LC_ALL,"portuguese");
      printf("\n Digite um valor para N :\n");
    scanf("%i",&n);
    descobrindoValores(n);
     printf("\n Valor : %.2f",h);


    return 0;
}
int descobrindoValores(int numero)
{
     a = 0;
    b = 1;
    numerador=1;
    denominador=2;
    sinal=1;
    h=0;
    for(i=0; i<numero; i++)
    {
        auxiliar = a + b;
        a = b;
        b = auxiliar;

        fracao=numerador/(denominador*1.00)*sinal;
        printf("\n O valor do numerador é : %i",numerador);
        printf("\n O valor do denominador é : %i\n",denominador);

        h=h+fracao;
        numerador=auxiliar;
        denominador=denominador+2;
        sinal= sinal*-1;



    }
    return h;
}
