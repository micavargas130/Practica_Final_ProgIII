#include <iostream>
#include "../Lista/Lista.h"
using  namespace std;
void imprimeInverso (Lista<int>&L, int p )
{
    for (int i=p; p<L.getTamanio(); i++){

     cout<<L.getDato(i)<<endl;   }
}





int main() {

    Lista<int> A;
    int dato, d;

    cout << "ingrese datos";
    for (int i = 0; i < 6; i++) {
        cin >> dato;
        A.insertarUltimo(dato);
    }
    cout << "\nSu lista:";
    A.print();
    
    cout<<"ingrese a partir de que numero quiere empezar a mostrar:"<<endl;
    cin>>d;
    imprimeInverso (A, d );
}