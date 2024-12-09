#include <iostream>
using namespace std;

int main() {
    int horas, precio;

    cout << "Ingrese la cantidad de horas que ha trabajado: ";cin >> horas;
    cout << "Ingrese el monto de pago por hora: ";cin >> precio;

    double sb = horas * precio;
    double sbrt = sb +(sb * 0.20);
    double snt = sbrt - (sbrt*0.10);

    cout<<"El sueldo basico es: "<<sb<<endl;
    cout<<"El sueldo bruto es: "<<sbrt<<endl;
    cout<<"El sueldo neto es: "<<snt<<endl;

    return 0;
}
