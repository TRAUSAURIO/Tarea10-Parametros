//Autor: Ronald Elian Hurtado Jama
//Fecha: 11/06/2024
//Tema: Paso por paramatro de valor

#include<iostream>
using namespace std;

int FuncionPasoporValor(int num)
{
    num = num *10;
    cout<<endl<<"El valor de la variable num dentro de la funcion: "<<num;
    return 1;
}
 int main()
 {
    int num = 2;
    cout<<endl<<"El valor de la variable num antes de la llamada:"<<num;
    FuncionPasoporValor(num);
    cout<<endl<<"El valor de la variable num despues de la llamada: "<<num;
    return 0;
 }