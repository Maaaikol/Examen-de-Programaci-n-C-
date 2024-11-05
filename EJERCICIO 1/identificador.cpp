/* Ejercicio 1: Identificación de Número Positivo, Negativo o Cero Escribe un programa en C++
 * que solicite al usuario ingresar un número entero. El programa deberá analizar el número ingresado
 * e imprimir en pantalla si el número es "positivo", "negativo" o "cero".*/

#include "identificador.h"
#include <iostream>
using namespace std;


void identificador() {
    int a;
    cout << "Introduzca un numero al azar: " << endl;
    cin >> a;
    if(a > 0)
        cout << "El numero " << a << " es positivo" << endl;
    if (a < 0)
        cout << "El numero " << a << " es negativo" << endl;
    if (a == 0)
        cout << "El numero " << a << " es 0" << endl;
}