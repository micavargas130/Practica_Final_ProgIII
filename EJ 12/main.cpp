#include <iostream>
#include "../Arbol/ArbolBinario.h"
using namespace std;
int main() {
    std::cout << "Ejercicio 05/01\n" << std::endl;
    int d;
    ArbolBinario<int> A;

    for(int i=0; i<4; i++)
    {   cin>>d;
        A.put(d);
    }
    A.print();
    A.getCont();

}