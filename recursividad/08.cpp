#include <iostream>
using namespace std;

long long potencia(int n, int m) {
    if (m == 0) {
        return 1;}
    return n * potencia(n, m - 1);
}

int main() {
    int n, m;

    cout << "Ingrese la base: ";cin >> n;
    cout << "Ingrese el exponente: ";cin >> m;

    long long resultado = potencia(n, m);

    cout << "El resultado de " << n << " elevado a " << m << " es: " << resultado << endl;

    return 0;
}