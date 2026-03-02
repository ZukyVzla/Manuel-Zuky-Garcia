/**********************************************************************************************************************

Hi, welcome to the code exercise about: Crear una clase que reciba distancia y tiempo, y calcule la velocidad promedio.
By: Manuel García - Electrónica IV
Subject: Sistemas Digitales

**********************************************************************************************************************/

#include <iostream>
#include <string>
using namespace std;

class CalculadoraVelocidad 
{
    private:
        float distancia;
        float tiempo;

    public:     
        CalculadoraVelocidad(float d, float t) { // Constructor para inicializar los valores
        distancia = d;
        tiempo = t;
    }

    float calcularVelocidad() { // Método para calcular la velocidad promedio

        if (tiempo <= 0) {
            cout << "Error: El tiempo debe ser mayor a cero." << endl;
            return 0;
        }
        return distancia / tiempo;
    }

    void mostrarResultado() { // Métodos para mostrar los datos

        float v = calcularVelocidad();
        if (tiempo > 0) {
            
            cout << "--- Resultados ---" << endl; // Print para mostrar resultados
            cout << "Para una distancia de " << distancia << " metros" << endl;
            cout << "y un tiempo de " << tiempo << " segundos," << endl;
            cout << "la velocidad promedio es: " << v << " m/s" << endl;
        }
    }
};

int main() 
{
    float d, t;

    cout << "--- Calculador de Velocidad Promedio ---" << endl;
    
    cout << "Ingrese la distancia (en metros): ";
    cin >> d;
    
    cout << "Ingrese el tiempo (en segundos): ";
    cin >> t;

    CalculadoraVelocidad miViaje(d, t); // Crear el objeto de la clase

    miViaje.mostrarResultado(); // Mostrar el resultado

    return 0;
}
