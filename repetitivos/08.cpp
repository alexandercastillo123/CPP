#include <iostream>
using namespace std;

int main() {
    int n, m;
    long long resultado = 1;

    cout << "Ingrese la base: ";cin >> n;
    cout << "Ingrese el exponente: ";cin >> m;

    for (int i = 1; i <= m; i++) {
        resultado *= n;
    }

    cout << "El resultado de " << n << " elevado a " << m << " es: " << resultado << endl;

    return 0;
}