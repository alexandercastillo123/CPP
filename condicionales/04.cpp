#include <iostream>
using namespace std;

int main() {
    double n1, n2, n3, promedio, extras;

    cout << "Ingrese su nota 1: ";cin >> n1;
    cout << "Ingrese su nota 2: ";cin >> n2;
    cout << "Ingrese su nota 3: ";cin >> n3;
    
    if (n3>=10) extras = 2;
    else 0;

    promedio = (n1 + n2 + n3 + extras)/3;
    
    cout << "El promedio es: " << promedio << endl;

    return 0;
}