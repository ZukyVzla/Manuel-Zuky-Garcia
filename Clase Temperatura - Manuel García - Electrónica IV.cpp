/*******************************************************************************************************************************

Hi, welcome to the code exercise about: Crear una clase que convierta grados Celsius a Fahrenheit y Kelvin usando solo fórmulas.
By: Manuel García - Electrónica IV
Subject: Sistemas Digitales

*******************************************************************************************************************************/

#include <iostream>
#include <string>
using namespace std;

class ConversorTemperatura // Nombre de la clase 
{
    private: // Nivel de acceso a la clase
        float Celsius; // Atributo de grados centígrados con decimales 
        
    public: // Nivel de acceso a la clase
        ConversorTemperatura(float valor) : Celsius(valor) {} // Atributo para ingresar el valor
        
        float ConvertirAFahrenheit() { // Método para convertir a Fahrenheit
        return (Celsius * 1.8) + 32; // Formula para realizar la conversión de Celsius a Fahrenheit
        }
        
        float ConvertirAKelvin() { // Método para convertir a Kelvin
        return (Celsius + 273.15); // Formula para realizar la conversión de Celsius a Kelvin
        }
};

int main()
{
    float temperatura;
    
    cout << "Introduce la temperatura en grados Celsius: " << endl; // Print en la pantalla con ese mensaje entre "" al usuario
    cin >> temperatura; // El usuario ingresa el valor de la temperatura en grados Celsius o centígrados (Es lo mismo)

    ConversorTemperatura convertir(temperatura); // Crear el objeto convertir(temperatura) de la clase ConversorTemperatura
    
    cout << "--- Resultados ---" << endl;
    cout << "Fahrenheit: " << convertir.ConvertirAFahrenheit() << " °F" << endl;
    cout << "Kelvin: " << convertir.ConvertirAKelvin() << " °K" << endl;

    return 0;
}
