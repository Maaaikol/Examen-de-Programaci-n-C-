/* Ejercicio 2: Día de la Semana Crea un programa en C++
 * que solicite al usuario ingresar un número del 1 al 7.
 * El programa deberá imprimir el nombre del día de la semana correspondiente al número ingresado
 * (por ejemplo, 1 para lunes, 2 para martes, ..., 7 para domingo). */

#include "semanas.h"
#include <iostream>

using namespace std;

void dias() {
 int a;
 cout << "Introduzca un numero entre el 1-7 para los dias de la semana: " << endl;
 cin >> a;
 switch (a) {
  case 1:
   cout << "Lunes" << endl;
  break;
  case 2:
   cout << "Martes" << endl;
  break;
  case 3:
   cout << "Miercoles" << endl;
  break;
  case 4:
   cout << "Jueves" << endl;
  break;
  case 5:
   cout << "Viernes" << endl;
  break;
  case 6:
   cout << "Sabado" << endl;
  break;
  case 7:
   cout << "Domingo" << endl;
 break;
  default: cout << "Numero no valido!! Introduzva un numero valido." << endl;
 }
}
