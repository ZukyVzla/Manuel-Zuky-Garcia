/******************************************************************************

Programa: Aprobación según promedio
By: Manuel García - Electrónica IV
Subject: Sistemas Digitales

*******************************************************************************/
#include <iostream>

using namespace std;

int main(
{
    // Declaración de variables para las 3 notas y el promedio
    float nota1, nota2, nota3, promedio;

    // Entrada de datos: Se le solicitan las calificaciones al usuario
    cout << "Ingrese la primera calificación: ";
    cin >> nota1;

    cout << "Ingrese la segunda calificación: ";
    cin >> nota2;

    cout << "Ingrese la tercera calificación: ";
    cin >> nota3;

    // Cálculo del promedio
    promedio = (nota1 + nota2 + nota3) / 3;

    // Se muestra el promedio obtenido en pantalla
    cout << "\nLa nota final promedio es: " << promedio << endl;

    // Estructura condicional para determinar la aprobación en notas del 01 al 20
    if (promedio >= 10) {
        // Se ejecuta si la condicion es verdadera
        cout << "Estado: Aprobado";
    } 
    
    else {
        // Se ejecuta si la condicion es falsa (menor a 10)
        cout << "Estado: Reprobado";
    }

    return 0;
}