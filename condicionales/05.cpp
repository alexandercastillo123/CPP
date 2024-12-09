#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Ingrese un número de 4 cifras: ";cin >> numero;

    if (numero < 1000 || numero > 9999) {
        cout << "El numero debe ser de 4 cifras." << endl;
        return 1;
    }

    int cifra1 = numero / 1000;
    int cifra2 = (numero / 100) % 10;
    int cifra3 = (numero / 10) % 10;
    int cifra4 = numero % 10;

    int mayor = max(max(cifra1, cifra2), max(cifra3, cifra4));
    int menor = min(min(cifra1, cifra2), min(cifra3, cifra4));

    int mayorNumero = (mayor * 10) + menor;

    cout << "Nuevo número formado es: " << mayorNumero << endl;

    return 0;
}
