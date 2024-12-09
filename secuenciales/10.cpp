#include <iostream>
using namespace std;

int main() {
    int numero, invertido = 0;

    cout << "Ingrese un numero de 4 cifras: ";
    cin >> numero;

    if (numero >= 1000 && numero <= 9999) {
        while (numero > 0) {
            invertido = invertido * 10 + numero % 10;
            numero /= 10;
        }

        cout << "El número invertido es: " << invertido << endl;
    } else {
        cout << "Por favor, ingrese un número de 4 cifras." << endl;
    }
    
    return 0;
}