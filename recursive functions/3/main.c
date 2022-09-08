#include <stdio.h>
#include <stdlib.h>
#include<locale.h>


    int main()
{
         setlocale(LC_ALL,"portuguese");
    int x,y,aux=0;
    int i;
    printf("\n Digite o valor de x : ");
    scanf("%i",&x);
    printf("\n Digite o valor de y : ");
    scanf("%i",&y);

        while(x>=y)
        {

        aux=x-y;
        x=y;
        x=aux;


        }
          printf("\n O resto é : %i",aux);
 return 0;
}
