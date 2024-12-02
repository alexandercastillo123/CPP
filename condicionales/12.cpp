#include <iostream>
#include <string>
using namespace std;

int main()
{
    int numero;
    string dias[] = {"Lunes","Martes","Miercoles","Jueves","Viernes","Sabado","Domingo"};
    
    cout<<"Núnero :"; cin>>numero;
    if (numero >= 1 && numero <=7) cout<<"Dia :"<<dias[numero-1]<<endl;
    else cout<<"Error"<<endl;
    
    return 0;
}