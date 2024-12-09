#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Ingrese el 1er número: ";cin >> a;
    cout << "Ingrese el 2do número: ";cin >> b;
    cout << "Ingrese el 3er número: ";cin >> c;

    if (a < b && b < c) {cout << "Los números están en orden ascendente." << endl;}
    else if (a > b && b > c) {cout << "Los números están en orden descendente." << endl;}
    else {cout << "Los números están en desorden." << endl;}

    return 0;
}