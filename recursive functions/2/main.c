#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL,"portuguese");
    int x,y;
    printf("\n Digite o valor de x : ");
    scanf("%i",&x);
    printf("\n Digite o valor de y : ");
    scanf("%i",&y);
    calculo(x,y);

    return 0;
}
void calculo(int num1,int num2)
{
    int aux=0;
    while(num1>=num2)
        {

        aux=num1-num2;
        num1=num2;
        num1=aux;


        }
          printf("\n O resto é : %i",aux);


}
