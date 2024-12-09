#include <iostream>
using namespace std;

int main() {
    double ra, h, pi;

    cout << "Ingrese el radio: ";cin >> ra;
    cout << "Ingrese la altura: ";cin >> h;

    double area = 2*3.1416*ra*(ra+h);
    double volumen = 3.1416*ra*ra*h;

    cout<<"El área del cilindro es: "<<area<<endl;
    cout<<"El volumen del cilindro es: "<<volumen<<endl;

    return 0;
}