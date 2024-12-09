#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Ingrese el 1er número: ";cin >> a;
    cout << "Ingrese el 2do número: ";cin >> b;
    cout << "Ingrese el 3er número: ";cin >> c;

    int intermedio = a;
    
    if ((b > a && b < c) || (b < a && b > c)) {intermedio = b;}
    else if ((c > a && c < b) || (c < a && c > b)) {intermedio = c;}

    cout << "El número intermedio es: " << intermedio << endl;

    return 0;
}
