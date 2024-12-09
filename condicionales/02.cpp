#include <iostream>

using namespace std;
int main()
{
    int cantidad;
    double importe,dsc, caramelos;
    
    cout<<"Ingrese la cantidad del producto: ";cin>>cantidad;
    
    importe = 20 * cantidad;
    
    if(importe < 501 && importe > 0)dsc=0.12;
    else if(importe>500 && importe<701)dsc=0.14;
    else if(importe>700)dsc=0.16;
    else cout<<"Algo salio mal.";
    
    if(cantidad>0 && cantidad<51)caramelos=5;
    else if(cantidad>50 && cantidad<101)caramelos=10;
    else if(cantidad>100)caramelos=15;
    else cout<<"Algo salio mal.";
    
    double descuento = importe * dsc;
    double total = importe - descuento;
    
    cout<<"El importe es: "<<importe<<endl;
    cout<<"El descuento es: "<<descuento<<endl;
    cout<<"El total a pagar es: "<<total<<endl;
    cout<<"Caramelos: "<<caramelos<<endl;
    
    return 0;
}