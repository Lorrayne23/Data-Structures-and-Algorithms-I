#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
#include "Atividade 1.h"
void menu();

float result;
int main()
{
    setlocale(LC_ALL,"portuguese");
    int op;
    float valor1,valor2;
    printf("\n Digite o primeiro valor : ");
    scanf("%f",&valor1);
     printf("\n Digite o segundo valor : ");
    scanf("%f",&valor2);

    do{
         menu();
    printf("\n Escolha opção do menu : ");
    scanf("%i",&op);
    switch(op)
    {
    case 1:
           multiplicacao(valor1,valor2);
           printf("\n O resultado é %.2f\n",multiplicacao(valor1,valor2));
        break;

        case 2:
      soma(valor1,valor2);
      printf("\n O resultado é %.2f\n",soma(valor1,valor2));
        break;

        case 3:
        impares(valor1,valor2);
        printf("\n ",impares(valor1,valor2));

        break;

    }
            system("PAUSE");
    }while(op!=4);


    return 0;
}
void menu()
{
    system("CLS");
    printf("\n MENU");
    printf("\n 1-MULTIPLICAÇÃO DE VALORES \n");
      printf("\n 2-SOMA DE VALORES \n");
        printf("\n 3-NÚMEROS IMPARES EXISTEM NO INTRVALO \n");
          printf("\n 4-SAIR  \n");

}


