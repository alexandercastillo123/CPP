#include <iostream>
using namespace std;

bool cumpleCondicion(int numero) {
    int miles = numero / 1000;
    int centenas = (numero / 100) % 10;
    int decenas = (numero / 10) % 10;
    int unidades = numero % 10;
    int sumaPares = miles + centenas;
    int sumaImpares = decenas + unidades;
    return sumaPares == sumaImpares;
}

int main() {
    int contador = 0;

    for (int i = 1000; i <= 9999; i++) {
        if (cumpleCondicion(i)) {
            cout << i << endl;
            contador++;
        }
    }

    cout << "Cantidad de numeros encontrados: " << contador << endl;

    return 0;
}