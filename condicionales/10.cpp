#include <iostream>
using namespace std;

int main() {
    int n1, n2, n3, n4, n5, suma, mayor, menor, resta;
    double promedio;

    cout << "Ingrese la 1era nota: "; cin >> n1;
    cout << "Ingrese la 2da nota: "; cin >> n2;
    cout << "Ingrese la 3era nota: "; cin >> n3;
    cout << "Ingrese la 4ta nota: "; cin >> n4;
    cout << "Ingrese la 5ta nota: "; cin >> n5;
    
    suma = n1 + n2 + n3 + n4 + n5;

    mayor = n1; 
    menor = n1;
    
    if (n2 > mayor) mayor = n2;
    if (n3 > mayor) mayor = n3;
    if (n4 > mayor) mayor = n4;
    if (n5 > mayor) mayor = n5;

    if (n2 < menor) menor = n2;
    if (n3 < menor) menor = n3;
    if (n4 < menor) menor = n4;
    if (n5 < menor) menor = n5;

    resta = suma - mayor - menor;

    promedio = resta / 3.0;

    cout << "La nota menor es: " << menor << endl;
    cout << "La nota mayor es: " << mayor << endl;
    cout << "El promedio es: " << promedio << endl;

    return 0;
}
