#include <iostream>
using namespace std;

void procesarNumeros(int i, double suma, double mayor, double menor) {
    double numero;
    
    if (i > 10) {
        double promedio = suma / 10;
        cout << "Menor: " << menor << endl;
        cout << "Mayor: " << mayor << endl;
        cout << "Promedio: " << promedio << endl;
        return;
    }

    cout << "Número " << i << ": ";
    cin >> numero;

    if (i == 1) {
        mayor = menor = numero;
    } else {
        if (numero > mayor) mayor = numero;
        if (numero < menor) menor = numero;
    }

    suma += numero;

    procesarNumeros(i + 1, suma, mayor, menor);
}

int main() {
    cout << "Ingrese 10 números:" << endl;

    procesarNumeros(1, 0, 0, 0);

    return 0;
}