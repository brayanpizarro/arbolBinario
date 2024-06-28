#include "ArbolBinario.h"
#include "Nodo.h"
#include <iostream>
using namespace std;
ArbolBinario::ArbolBinario(){
    this->raiz=nullptr;
}
Nodo* ArbolBinario::getRaiz(){
    return raiz;
}
void ArbolBinario::insertarNodo(int _dato){
    this->raiz=insertarNodo(raiz,_dato);
}
Nodo* ArbolBinario::insertarNodo(Nodo* actual,int _dato){
    if(actual==nullptr){
        Nodo* nuevo=new Nodo(_dato);
        return nuevo;
    }
    else if(_dato<actual->getDato()){
        actual->setIzq(insertarNodo(actual->getIzq(),_dato));
       
    }else if(_dato>actual->getDato()){
        actual->setDer(insertarNodo(actual->getDer(),_dato));
    }
    return actual;
}
void ArbolBinario::recorridoPreOrderRID(Nodo* actual){
    if(raiz==nullptr){
        cout<<"el arbo esta vacio"<<endl;
        return;
    }
    else if (actual!=nullptr){
        cout<<actual->getDato()<<",";
        recorridoPreOrderRID(actual->getIzq());
        recorridoPreOrderRID(actual->getDer());
    }
    
}
void ArbolBinario::recorridoInOrdenIRD(Nodo* actual){
    if(raiz==nullptr){
        cout<<"el arbol esta vacio"<<endl;
        return;
    }
    else if(actual!=nullptr){
        recorridoInOrdenIRD(actual->getIzq());
        cout<<actual->getDato()<<",";
        recorridoInOrdenIRD(actual->getDer());
    }
}
void ArbolBinario::recorridoPosOrdenIDR(Nodo* actual){
    if(raiz==nullptr){
        cout<<"el arbol esta vacio"<<endl;
        return;
    }
    else if(actual!=nullptr){
        recorridoPosOrdenIDR(actual->getIzq());
        recorridoPosOrdenIDR(actual->getIzq());
        cout<<actual->getDato()<<",";
    }
}
ArbolBinario::~ArbolBinario(){}