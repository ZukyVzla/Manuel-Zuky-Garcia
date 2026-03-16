/******************************************************************************

Programa: Determinar si un número es par o impar
By: Manuel García - Electrónica IV
Subject: Sistemas Digitales

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int numero; // Se declara la variable para el número entero
    
    // Se solicita el número al usuario
    
    cout << "Ingrese un numero entero para saber si es par o impar: ";
    cin >> numero;
    
    // Validacion: ¿El número es cero?
    
    if (numero == 0) {
        cout << "El número ingresado es cero cuyo valor es neutro." << endl;
    } 
        
    // Estructura condicional para verificar los valores
   
    if (numero % 2 == 0) { // El operador % obtiene el residuo de la división
        cout << "El número " << numero << " es par."; // Si el residuo es 0, es par
    }
    else {
        cout << "El número " << numero << " es impar."; // De lo contrario, es impar
    }

    return 0;
}