/* Ejercicio 4: Promoción de "3 por 2" en Tienda En una tienda se está ofreciendo una promoción
 * en la cual el cliente puede llevarse tres artículos y pagar solo por los dos artículos más caros.
 * Escribe un programa en C++ que solicite al usuario ingresar los precios de tres artículos y, como
 * resultado, muestre el total que el cliente debe pagar bajo esta promoción. */


#include "Promoción3por2.h"
#include <iostream>

using namespace std;

void Promocion3por2() {

  float precio1, precio2, precio3;

  cout << "Introduce el precio del primer articulo: ";
  cin >> precio1;
  cout << "Introduce el precio del segundo articulo: ";
  cin >> precio2;
  cout << "Introduce el precio del tercer articulo: ";
  cin >> precio3;

  float menor_precio = min(precio1, min(precio2, precio3));
  float total = precio1 + precio2 + precio3 - menor_precio;
  cout << "El total a pagar bajo la promocion 3 por 2 es: " << total << "E" << endl;
 }