// Autor: Ronald Elian Hurtado Jama
// Fecha: 11/06/2024
// Tema: Funciones diversas - Cubo de un número

#include <iostream>
using namespace std;

int Cubo(int numero)
{
    return numero * numero * numero;
}

int main()
{
    int cubo = Cubo(3);
    cout << "El cubo de 3 es: " << cubo << endl;

    return 0;
}
