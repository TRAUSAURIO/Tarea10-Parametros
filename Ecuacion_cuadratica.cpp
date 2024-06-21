// Autor: Ronald Elian Hurtado Jama
// Fecha: 11/06/2024
// Tema: Funciones diversas - Ecuación cuadrática

#include <iostream>
#include <cmath>
using namespace std;

bool EcuacionCuadratica(double a, double b, double c, double& x1, double& x2) 
{
 //FALTA VERIFICAR SI "A" ES CERO
    
    double discriminante = b * b - 4 * a * c;
    if (discriminante < 0) 
    {
        return false;
    } 
    else 
    {
        x1 = (-b + sqrt(discriminante)) / (2 * a);
        x2 = (-b - sqrt(discriminante)) / (2 * a);
        return true;
    }
}

int main()
{
    double x1, x2;
    if (EcuacionCuadratica(1, -3, 2, x1, x2)) 
    {
        cout << "Las soluciones de la ecuación cuadrática son: x1 = " << x1 << ", x2 = " << x2 << endl;
    } 
    else 
    {
        cout << "La ecuación cuadrática no tiene soluciones reales." << endl;
    }

    return 0;
}
