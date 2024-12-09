#include <iostream>
using namespace std;

int main()
{
    int cantidad, monto;
    double dsc;
    
    cout<<"Cantidad de producto: ";cin >> cantidad;
    
    if (cantidad > 0 && cantidad < 26) { monto = 27; dsc = 0.05;}
    else if (cantidad > 25 && cantidad < 51) { monto = 25; dsc = 0.05;}
    else { monto = 23; dsc = 0.15;}
    
    double importe = cantidad * monto;
    double descuento = importe * dsc;
    double total = importe - descuento;
    
    cout<<"El importe es: "<<importe<<endl;
    cout<<"El descuento es: "<<descuento<<endl;
    cout<<"El total a pagar es: "<<total<<endl;
    
    return 0;
}