#include <iostream>
using namespace std;

int main() {
    double peso, estatura, imc;

    cout << "Ingrese el peso en kilogramos: ";
    cin >> peso;

    cout << "Ingrese la estatura en metros: ";
    cin >> estatura;

    imc = peso / (estatura * estatura);

    cout << "El IMC es: " << imc << endl;

    if (imc < 20) {cout << "Grado de obesidad: Delgado" << endl;} 
    else if (imc >= 20 && imc <= 25) {cout << "Grado de obesidad: Normal" << endl;}
    else if (imc > 25 && imc <= 27) {cout << "Grado de obesidad: Sobrepeso" << endl;}
    else {cout << "Grado de obesidad: Obesidad" << endl;}

    return 0;
}