#pragma once
#include <iostream>

class Nodo
{
private:
    int dato;
    Nodo* izq;
    Nodo* der;
public:
    Nodo(int dato);
    int getDato();
    Nodo* getIzq();
    Nodo* getDer();
    void setDato(int dato);
    void setIzq(Nodo* izq);
    void setDer(Nodo* der);
    ~Nodo();
};