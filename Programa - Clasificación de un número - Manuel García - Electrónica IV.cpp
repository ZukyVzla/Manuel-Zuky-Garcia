/******************************************************************************

Programa: Clasificación de un número
By: Manuel García - Electrónica IV
Subject: Sistemas Digitales

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    // Declaración de variable para almacenar el número entero
    int numero;

    // Solicitud de datos al usuario
    cout << "Ingrese un número entero: ";
    cin >> numero;

    // Estructura condicional if-else para la clasificación
    if (numero > 0) {
        // Se ejecuta si el número es estrictamente mayor a 0
        cout << "El número " << numero << " es positivo.";
    } 
    
        else if (numero < 0) {
            // Se ejecuta si la primera condición falló y el número es menor a 0
            cout << "El número " << numero << " es negativo.";
        }
        
    else {
        // Si no es mayor ni menor a 0, por lógica es cero
        cout << "El número ingresado es cero (valor neutro).";
    }

    return 0;
}
