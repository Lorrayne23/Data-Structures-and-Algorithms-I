#include <iostream>
#include<locale.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

class Conta
{
public :
char nome_cliente[30];
int codigo_cliente;
float saldo_bancario;
Conta();// método construtor sem parâmetros
Conta(char name[30],int codigo,float saldo);// método contrutor com parâmetro
void Depositar(float quantidade);// método para depósito
void Sacar(float quantidade);// método para saque
void imprime();


};


Conta::Conta() // construtor sem parâmetros
{
printf("\n Executando método construtor sem parâmetros ! \n");
printf("\n---------------------------------------------\n");

printf("\n Digite o nome do cliente : ");
gets(nome_cliente);
printf("\n Digite o código do cliente : ");
scanf("%i",&codigo_cliente);
printf("\n Digite o saldo da conta bancária do cliente : ");
scanf("%f",&saldo_bancario);
printf("\n---------------------------------------------");


}
Conta::Conta(char name[30],int codigo,float saldo) // método construtor com parâmetro
{
printf("\n Execultando método contrutor com parâmetro ! ");
strcpy(nome_cliente,name);
codigo_cliente=codigo;
saldo_bancario=saldo;
printf("\n---------------------------------------------");

}
void Conta::Depositar(float quantidade )
{

this;
saldo_bancario+=quantidade;

}
void Conta::Sacar(float quantidade)

{


if(saldo_bancario>50.00)
{
this;
saldo_bancario-=quantidade;
}
else
{
printf("\n Não pode ser realizado saque !");
}

 

}
void Conta::imprime()
{
printf("\n DADOS \n");
printf("\n Nome do cliente : %s ",nome_cliente);
printf("\n Código cliente : %i",codigo_cliente);
printf("\n Saldo bancário : %.2f",saldo_bancario);
printf("\n---------------------------------------------\n");


}
int main()
{
system("MODE con cols=100 lines=100");
setlocale(LC_ALL,"portuguese");
Conta c,cp("Carlos",1234,23.78);
printf("\n Método sem parâmetro : \n");
c.imprime();
printf("\n Método com parâmetro : \n");
cp.imprime();
c.Depositar(100);
printf("\n Após depósito : \n");
c.imprime();
cp.Depositar(100);
printf("\n Após depósito : \n");
cp.imprime();
c.Sacar(50);
printf("\n Após saque : \n");
c.imprime();
cp.Sacar(50);
printf("\n Após saque : \n");
cp.imprime();
system("pause");

return 0;
}

