#include <iostream>
using namespace std;

int main() {
    int num, contador = 0;

    cout << "Ingrese un número entero: ";cin >> num;

    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {contador++;}}

    cout << "La cantidad de divisores de " << num << " es: " << contador << endl;

    return 0;
}