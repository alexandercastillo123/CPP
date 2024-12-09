#include <iostream>
using namespace std;

void sumarMultiplos(int i, int n, int suma) {
    if (i > n) {
        cout << "La suma de los múltiplos de 3 pero no de 5 menores o iguales a " << n << " es: " << suma << endl;
        return;
    }

    if (i % 3 == 0 && i % 5 != 0) {
        suma += i;
    }

    sumarMultiplos(i + 1, n, suma);
}

int main() {
    int n;

    cout << "Ingrese un número entero positivo: "; 
    cin >> n;

    sumarMultiplos(1, n, 0);

    return 0;
}