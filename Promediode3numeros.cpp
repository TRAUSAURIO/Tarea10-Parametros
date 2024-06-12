// Autor: Ronald Elian Hurtado Jama
// Fecha: 11/06/2024
// Tema: Funciones diversas - Promedio de 3 números

#include <iostream>
using namespace std;

double Promedio(double num1, double num2, double num3)
{
    return (num1 + num2 + num3) / 3.0;
}

int main()
{
    double promedio = Promedio(5.0, 10.0, 15.0);
    cout << "El promedio es: " << promedio << endl;

    return 0;
}
