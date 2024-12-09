#include <iostream>
using namespace std;

int main() {
    int monto;

    cout << "Ingrese el monto de donación realizado: ";cin >> monto;

    double centro_salud = monto * 0.25;
    double comedor_infantil = monto * 0.35;
    double escuela_infantil = monto * 0.25;
    double asilo_ancionos = monto * 0.15;

    cout<<"El monto asignado para el centro de salud es: "<<centro_salud<<endl;
    cout<<"El monto asignado para el comedor infantil es: "<<comedor_infantil<<endl;
    cout<<"El monto asignado para la escuela infantil es: "<<escuela_infantil<<endl;
    cout<<"El monto asignado para el asilo de ancianos es: "<<asilo_ancionos<<endl;
    
    return 0;
}
