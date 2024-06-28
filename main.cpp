#include "ArbolBinario.h"
#include <iostream>
using namespace std;
int main(){
    ArbolBinario* arbol=new ArbolBinario();
    arbol->insertarNodo(5);
    arbol->insertarNodo(3);
    arbol->insertarNodo(8);
    arbol->insertarNodo(2);
    arbol->insertarNodo(4);
    arbol->insertarNodo(7);
    arbol->insertarNodo(9);
    arbol->insertarNodo(1);
    arbol->insertarNodo(6);
    
    cout<<"recorrido en pre orden RID"<<endl;
    arbol->recorridoPreOrderRID(arbol->getRaiz());

    cout<<"---------------"<<endl;
    cout<<"recorrido en in orden IRD"<<endl;
    arbol->recorridoInOrdenIRD(arbol->getRaiz());

    cout<<"---------------"<<endl;
    arbol->recorridoPosOrdenIDR(arbol->getRaiz());

    cout<<"---------------"<<endl;
    


    delete arbol;
    return 0;
}