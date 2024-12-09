#include <iostream>
using namespace std;

bool esCapicua(int numero) {
    int centenas = numero / 100;
    int unidades = numero % 10;

    return (centenas == unidades);
}

void contarCapicuas(int i, int& contador) {
    if (i > 999) {
        return;
    }

    if (esCapicua(i)) {
        contador++;
    }

    contarCapicuas(i + 1, contador);
}

int main() {
    int contador = 0;
    contarCapicuas(100, contador);

    cout << "La cantidad de numeros capicuas de tres cifras es: " << contador << endl;

    return 0;
}