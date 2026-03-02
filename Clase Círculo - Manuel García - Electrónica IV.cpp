/********************************************************************************************************************************

Hi, welcome to the code exercise about: Crear una clase que reciba el radio y calcule el área y la longitud de la circunferencia.
By: Manuel García - Electrónica IV
Subject: Sistemas Digitales

********************************************************************************************************************************/

#include <iostream>
#include <string>
#include <cmath> // Para M_PI y pow
using namespace std;

class Circulo
{
    private:
        float radio;

    public:
        Circulo(float r) { // Constructor
          
        radio = r;
    }
    
    float calcularArea() { // Método para calcular el área

        return M_PI * pow(radio, 2);
    }

    float calcularLongitud() { // Método para calcular la longitud (perímetro)

        return 2 * M_PI * radio;
    }
};

int main() 
{
    float r;

    cout << "--- Calculadora de Círculo ---" << endl;
    
    cout << "Introduce el radio: ";
    cin >> r;

    Circulo miCirculo(r); // Crear el objeto de la clase Circulo

    cout << "--- Resultados ---" << endl; // Print para mostrar resultados

    cout << "Área: " << miCirculo.calcularArea() << endl;
    
    cout << "Longitud: " << miCirculo.calcularLongitud() << endl;

    return 0;
}
