// Autor: Ronald Elian Hurtado Jama
// Fecha: 11/06/2024
// Tema: Funciones diversas - Promedio y sumatoria de 3 números

#include <iostream>
using namespace std;

double PromedioYSuma(double num1, double num2, double num3, double& suma)
{
    suma = num1 + num2 + num3;
    return suma / 3.0;
}

int main()
{
    double suma;
    double promedio = PromedioYSuma(5.0, 10.0, 15.0, suma);
    cout << "El promedio es: " << promedio << " y la sumatoria es: " << suma << endl;

    return 0;
}
