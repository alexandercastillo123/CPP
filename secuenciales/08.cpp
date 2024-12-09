#include <iostream>
using namespace std;

int main() {
    double ra, altura;

    cout << "Ingrese el radio del cilindro: ";cin >> ra;
    cout << "Ingrese la altura del cilindro: ";cin >> altura;

    double area_base = ra*ra*3.1416;
    double area_lateral = 2 * 3.1416 * ra * altura;
    double area_total =(2 * area_base) + area_lateral;

    cout<<"El área de la base es: "<<area_base<<endl;
    cout<<"El área lateral es: "<<area_lateral<<endl;
    cout<<"El area total es: "<<area_total<<endl;

    return 0;
}