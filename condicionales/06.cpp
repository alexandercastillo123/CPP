#include <iostream>
using namespace std;

int main() {
    int edad1, edad2, edad3;

    cout << "Ingrese la 1era edad: ";cin >> edad1;
    cout << "Ingrese la 2da edad: ";cin >> edad2;
    cout << "Ingrese la 3era edad: ";cin >> edad3;

    int mayor = edad1, menor = edad1;

    if (edad2 > mayor) {mayor = edad2;}
    if (edad3 > mayor) {mayor = edad3;}

    if (edad2 < menor) {menor = edad2;}
    if (edad3 < menor) {menor = edad3;}

    cout << "La edad menor es: " << menor << endl;
    cout << "La edad mayor es: " << mayor << endl;

    return 0;
}
