#include <iostream>
using namespace std;

int main()
{
    int numero;
    
    cout<<"Núnero :"; cin>>numero;

    if (numero > 0) cout<<"Positivo";
    else if(numero < 0) cout<<"Negativo";
    else cout<<"Cero";
    
    return 0;
}