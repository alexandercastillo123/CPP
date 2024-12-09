#include <iostream>
using namespace std;

bool esCapicua(int numero) {
    int centenas = numero / 100;
    int decenas = (numero / 10) % 10;
    int unidades = numero % 10;

    return (centenas == unidades);
}

int main() {
    int contador = 0;

    for (int i = 100; i <= 999; i++) {
        if (esCapicua(i)) {
            contador++;}}

    cout << "La cantidad de numeros capicuas de tres cifras es: " << contador << endl;

    return 0;
}