#include <iostream>
using namespace std;

int main() {
    int n, suma = 0;

    cout << "Ingrese un número entero positivo: ";cin >> n;

    int i = 1;
    while (i <= n) {
        if (i % 3 == 0 && i % 5 != 0) {
            suma += i;}
        i++;}

    cout << "La suma de los múltiplos de 3 pero no de 5 menores o iguales a " << n << " es: " << suma << endl;

    return 0;
}