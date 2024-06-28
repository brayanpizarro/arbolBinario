#pragma once
#include <iostream>
#include "Nodo.h"

class ArbolBinario{
private:
    Nodo* raiz;
public:
    ArbolBinario();
    Nodo* getRaiz();
    void insertarNodo(int _dato);
    Nodo* insertarNodo(Nodo* nodo,int _dato);
    void recorridoPreOrderRID(Nodo* actual);
    void recorridoInOrdenIRD(Nodo* actual);
    void recorridoPosOrdenIDR(Nodo* actual);
    void recorridoPorNivel(Nodo* actual);
    ~ArbolBinario();
};