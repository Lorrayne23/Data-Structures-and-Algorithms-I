#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int calculo(int num1,int num2);
int main()
{
    setlocale(LC_ALL,"portuguese");
    int x,y;
    printf("\n Digite o valor de x : ");
    scanf("%i",&x);
    printf("\n Digite o valor de y : ");
    scanf("%i",&y);
     printf("\n O resto é : %i",calculo(x,y));
    return 0;
}
int calculo(int num1,int num2)
{
    int aux=0;
    if(num2==0)

    {
        printf("\n Não é possível dividir por 0");
        return 0;
    }
    else {
    while(num1>=num2)
        {

        aux=num1-num2;
        num1=num2;
        num1=aux;


        }
        return aux;
      }


}

