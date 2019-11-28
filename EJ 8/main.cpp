
#include <iostream>
#include "../Pila/Pila.h"
using namespace std;

void Invertido (Pila<string> &P)
{
    while (!P.esVacia()) {
        cout << P.peek()<<" ";
        P.pop();
    }
}


int main ()
{
    Pila<string> P;

    string dato;


    cout<<"ingrese 0 para dejar de ingresar palabras";

    while (dato!="0")
    {   cin>>dato;
        P.push(dato);}



    Invertido(P);
}
