/****************************************************************************************************************************************

Hi, welcome to the code exercise about: Crear una clase que reciba capital, tasa y tiempo, y calcule el interés simple usando la fórmula.
By: Manuel García - Electrónica IV
Subject: Sistemas Digitales

****************************************************************************************************************************************/

#include <iostream>
#include <string>
using namespace std;

class InteresSimple // Nombre de la clase 
{
    private: // Nivel de acceso a la clase
        float capital; // Atributo de capital con decimales
        float tasa; // Atributo de tasa con decimales
        float tiempo; // Atributo de tiempo con decimales

    public: // Nivel de acceso a la clase
        InteresSimple(float c, float r, float t) { // Constructor para inicializar los valores
        capital = c;
        tasa = r;
        tiempo = t;
    }

        float calcularInteres() { // Método para calcular el interés
        // La fórmula es: I = c * r * t
        // Nota: Se divide la tasa entre 100 para convertir el porcentaje a decimal
        return capital * (tasa / 100) * tiempo;
    }

       void mostrarResultado() { // Método para mostrar el resumen de la inversión
        cout << "--- Resumen de Inversion ---" << endl;
        cout << "Capital Inicial: $" << capital << endl;
        cout << "Tasa de interés: " << tasa << "%" << endl;
        cout << "Tiempo: " << tiempo << " periodos (años)" << endl;
        cout << "Interés Generado: $" << calcularInteres() << endl;
        cout << "----------------------------" << endl;
    }
};

int main()
{
    float c, r, t; // Se trabaja con las variables abreviadas para mayor comodidad

    cout << "Ingrese el capital ($): ";
    cin >> c; // El usuario ingresa el valor de su capital
    
    cout << "Ingrese la tasa de interés anual (%): ";
    cin >> r; // El usuario ingresa el valor de la tasa de interés anual
    
    cout << "Ingrese el tiempo (en años): ";
    cin >> t; // El usuario ingresa el valor del periodo de tiempo en años

    InteresSimple miInversion(c, r, t); // Crear el objeto de la clase InteresSimple

    miInversion.mostrarResultado(); // Llamar a los métodos

    return 0;
}
