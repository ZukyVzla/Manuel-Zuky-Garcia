/**************************************************************************************

Programa: El mayor de tres números
By: Manuel García - Electrónica IV
Subject: Sistemas Digitales

**************************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    // Declaración de variables para almacenar los tres números y el mayor de los tres
    int num1, num2, num3;
    int mayor;

    // Entrada de datos
    cout << "Ingrese el primer número entero: ";
    cin >> num1;
    cout << "Ingrese el segundo número entero: ";
    cin >> num2;
    cout << "Ingrese el tercer número entero: ";
    cin >> num3;

    // Lógica para determinar el mayor
    // Se compara si num1 es mayor o igual a los otros dos
    if (num1 >= num2 && num1 >= num3) {
        mayor = num1;
    }
    
    // Si lo anterior no se cumple, se compara si num2 es el mayor
        else if (num2 >= num1 && num2 >= num3) {
        mayor = num2;
        }
    
    // Si ninguna de las anteriores fue cierta, por descarte num3 es el mayor
    else {
        mayor = num3;
    }
    
    // Verificar si los tres números ingresados son iguales
    if (num1 == num2 && num2 == num3) {
        cout << "\nLos tres números son iguales (" << num1 << ")";
    }
    
    // Lógica para determinar el mayor
    // Verificar si hay dos números iguales
        else if (num1 == num2 || num1 == num3 || num2 == num3) {
            cout << "\nNota: Se detectaron dos números iguales en la serie." << endl;
            
            //Especificar cuáles números son iguales (opcional)
            if (num1 == num2) cout << "- El primer y segundo número son iguales." << endl;
            if (num1 == num3) cout << "- El primer y tercer número son iguales." << endl;
            if (num2 == num3) cout << "- El segundo y tercer número son iguales." << endl;
            cout << "\nEl número mayor entre " << num1 << ", " << num2 << " y " << num3 << " es el: " << mayor;
        }   
    // Salida de resultados
    else {
        cout << "\nEl número mayor entre " << num1 << ", " << num2 << " y " << num3 << " es el: " << mayor;
    }
    
    return 0;
}