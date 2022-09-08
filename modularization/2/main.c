#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
void descobrindoResultado();
int main()

{
    setlocale(LC_ALL,"portuguese");

    descobrindoResultado();

    return 0;
}
void descobrindoResultado()
{
    int n,denominador,numerador,sinal,i;
    int a, b, auxiliar;
    a = 0;
    b = 1;
    float h,fracao;
    numerador=1;
    denominador=2;
    sinal=1;
    h=0;
    printf("\n Digite um valor para N : ");
    scanf("%i",&n);
    for(i=0; i<n; i++)
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
 printf("\n Valor : %.5f",h);
}
