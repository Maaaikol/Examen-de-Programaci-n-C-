/*Ejercicio 3: Cálculo de Promedio de Calificaciones Un estudiante ha completado un curso de programación
 *avanzada en C++. Durante el curso, ha realizado 8 ejercicios prácticos, y cada ejercicio se califica
 *con una nota entre 0 y 10. Escribe un programa que solicite al usuario introducir las calificaciones
 *obtenidas por el estudiante en cada uno de los 8 ejercicios. El programa deberá calcular y mostrar el
 *promedio de las calificaciones.*/


#include "PromedioNotas.h"
#include <iostream>

using namespace std;

int a, b, c, d, e, f, g, h;

void PromedioNotas() {

const int NUM_EJERCICIOS = 8;
 float calificaciones[NUM_EJERCICIOS];
 float suma= 0.0;

cout << "Introduzca las notas de los " << NUM_EJERCICIOS << "ejercicioes entre 0-10: " << endl;
 for (int i = 0; i< NUM_EJERCICIOS; i++) {
  cout << "Nota del ejercicio " << (i + 1) << ":" << endl;
  cin >> calificaciones[i];
  while (calificaciones[i] < 0 || calificaciones[i] > 10) {
   cout << "Nota no valida. Introduce una calificación entre 0 y 10: " << endl;
   cin >> calificaciones[i];
  }
  suma += calificaciones[i];
 }
 float promedio = suma / NUM_EJERCICIOS;
 cout << "El promedio de las calificaciones es: " << promedio << endl;
 }