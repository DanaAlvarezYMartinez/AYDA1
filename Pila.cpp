#include "Pila.h"

template <typename elem> Pila<elem>::Pila()
{
    //ctor
}

template <typename elem> void Pila<elem>::apilar(const elem & valor){
    this -> pila.push_front(valor); //tomo como que el tope de la pila es la posicion 1 siempre
}

template <typename elem> bool Pila<elem>::vacia()const{
    if (this->pila.size()==0)
        return true;
    else
        return false;
}

template <typename elem> elem Pila<elem>::tope()const{
    if (!this->vacia()){
        return this->pila.front();
    }
}

template <typename elem> void Pila<elem>::desapilar(){
    if(!this->vacia()){
        this->pila.pop_front();
    }
}

template class Pila<int>;
