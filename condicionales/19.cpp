#include <iostream>
using namespace std;

int main() {
    char sexo;
    int edad;
    string categoria;

    cout << "Ingrese el sexo del postulante (F para femenino, M para masculino): ";cin >> sexo;
    cout << "Ingrese la edad del postulante: ";cin >> edad;

    if (sexo == 'F' || sexo == 'f') {
        if (edad < 23) {categoria = "FA";}
        else {categoria = "FB";}}
    else if (sexo == 'M' || sexo == 'm') {
        if (edad < 25) {categoria = "MA";} 
        else {categoria = "MB";}}
    else {cout << "Sexo inválido." << endl;}

    cout << "La categoría del postulante es: " << categoria << endl;

    return 0;
}