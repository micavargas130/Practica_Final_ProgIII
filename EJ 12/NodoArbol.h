#ifndef NODOARBOL_H
#define NODOARBOL_H

template<class T>
class NodoArbol {
public:
    T dato;
    NodoArbol *izq, *der;
    char altura;
public:
    NodoArbol(T d) {
        dato = d;
        izq = nullptr;
        der = nullptr;
        altura=0;
    }
    NodoArbol() {
        izq = nullptr;
        der = nullptr;
        altura=0;
    }

    T getDato() const {
        return dato;
    }

    void setDato(T dato) {
        this->dato = dato;
    }

    NodoArbol *getIzq() const {
        return izq;
    }

    void setIzq(NodoArbol *izq) {
        NodoArbol::izq = izq;
    }

    NodoArbol *getDer() const {
        return der;
    }

    void setDer(NodoArbol *der) {
        NodoArbol::der = der;
    }

    NodoArbol *getAltura() const {
        return altura;
    }

    void setAltura(NodoArbol *altura) {
        NodoArbol::altura = altura;
    }
};

#endif //HASHENTRY_H