#include <iostream>
using namespace std;

int main() {
    double numero, suma = 0, mayor, menor, promedio;

    cout << "Ingrese 10 números:" << endl;

    for (int i = 1; i <= 10; i++) {
        cout << "Número " << i << ": ";
        cin >> numero;

        if (i == 1) {mayor = menor = numero;} 
        else {
            if (numero > mayor) mayor = numero;
            if (numero < menor) menor = numero;}

        suma += numero;}

    promedio = suma / 10;

    cout << "Menor: " << menor << endl;
    cout << "Mayor: " << mayor << endl;
    cout << "Promedio: " << promedio << endl;

    return 0;
}