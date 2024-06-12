// Autor: Ronald Elian Hurtado Jama
// Fecha: 11/06/2024
// Tema: Funciones diversas - Múltiplo de 7

#include <iostream>
using namespace std;

bool EsMultiploDeSiete(int numero)
{
    return numero % 7 == 0;
}

int main()
{
    int numero = 21;
    if (EsMultiploDeSiete(numero)) 
    {
        cout << numero << " es múltiplo de 7." << endl;
    } 
    else 
    {
        cout << numero << " no es múltiplo de 7." << endl;
    }

    return 0;
}
