#include <iostream>
using namespace std;

int main() {
    int numero;
    string genero, estado;

    cout << "Ingrese su codigo: ";cin >> numero;

    if (numero < 1000 || numero > 9999) {
        cout << "Número inválido. El número debe ser de cuatro cifras." << endl;}

    int estadoCivil = numero / 1000;
    int edad = (numero / 10) % 100;
    int sexo = numero % 10;

    switch (estadoCivil) {
        case 1: estado = "Soltero"; break;
        case 2: estado = "Casado"; break;
        case 3: estado = "Divorciado"; break;
        case 4: estado = "Viudo"; break;
        default: estado = "Estado civil inválido"; break;
    }

    if (sexo == 1) {genero = "Masculino";} 
    else if (sexo == 2) {genero = "Femenino";} 
    else {genero = "Sexo inválido";}

    cout << "Estado civil: " << estado << endl;
    cout << "Edad: " << edad << endl;
    cout << "Sexo: " << genero << endl;

    return 0;
}