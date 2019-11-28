#include <iostream>
using namespace std;
//#define T 100;

void mostrarArray (int *A, int nro)
{cout<<"Elementos del Array Ordenados"<<endl;
    for (int i=0; i<nro; i++)
    {
        cout<<A[i]<<endl;
    }
}

void quickSort (int *A, int primero, int ultimo)
{
    int central, i, j, pivot;
    central = (primero + ultimo)/2; //posicion central del array
    pivot=A[central];
    i=primero;
    j=ultimo;

    while (i<=j)
    {
       while (A[i]<pivot) {
           i++;
       }//separo los valores menores que el pivot
       while (A[j]>pivot) {j--;}//separo los mayores

       if (i<=j) {
           int aux;
           //intercambio los valores
           aux= A[i];
           A[i]=A[j];
           A[j]=aux;
           i++;
           j--;
       }
    }

    if (primero<j)
    {quickSort(A,primero,j);}
    if (i<ultimo)
    {quickSort(A,i,ultimo);}

}


int main() {
    std::cout << "Ejercicio 05/01\n" << std::endl;

    int nro, A[100];
    cout << "Ingrese cantidad de elementos del array:";
    cin >> nro;
    for (int i = 0; i < nro; i++) {
        cout << "Ingrese elemento del array";
        cin >> A[i];
    }

    quickSort(A,0,nro);
    mostrarArray(A,nro);
}