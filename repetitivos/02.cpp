#include <iostream>
using namespace std;

int main()
{
    int Multiplicando, Multiplicador;
    
    cout<<"Multiplicando :"; cin>>Multiplicando;
    cout<<"Multiplicador :"; cin>>Multiplicador;
    
    for (int n = Multiplicando; Multiplicador-- >1; Multiplicando += n );
    cout<<"Producto ="<<Multiplicando<<endl;
    
    return 0;
}