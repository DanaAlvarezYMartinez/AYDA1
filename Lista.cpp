#include "Lista.h"
#include <iostream>

template <typename elem> Lista<elem>::Lista(){
    lista=nullptr;//ctor
    ultimo=nullptr;
}

template <typename elem> void Lista<elem>::addElem(const elem & valor, unsigned int pos){
    nodo*aux=new nodo; //creo un nuevo nodo
    aux->valor=valor;
    if (lista==nullptr) { //osea si no tiene ningun elemento
        aux->sig=nullptr;
        lista=aux;
        ultimo=lista;
        contador_nodos+=1;

    }
    else{ //HAY 3 CASOS, al principio, al final, o al medio
        //CASO DEL PRINCIPIO
        if (pos==1){
            aux->sig=lista;
            ultimo=lista;
            lista=aux;
        }else{
            //CASO DEL FINAL
            if (pos==contador_nodos+1){
                aux->sig=nullptr;
                ultimo->sig=aux;
                ultimo=aux;
            }
            else{
                //CASO DEL MEDIO LA PUTA MADRE
                    if((pos>1)&& (pos<=contador_nodos)){
                        int i=1;
                        nodo*it=lista;
                        while (i<pos-1){
                            it=it->sig; //avanzo en la lista hasta llegar a la pos que quiero
                            i++;}
                        //cuando llego a la pos que quiero
                        aux->sig=it->sig;
                        it->sig=aux;
                    }
            }
        }
       contador_nodos+=1;
    }
}

template <typename elem> int Lista<elem>::longitud()const{
    return contador_nodos;
}

template <typename elem> bool Lista<elem>::vacia() const{
    if (contador_nodos==0)
        return true;
    else
        return false;
}

template <typename elem> elem Lista<elem>::getElem(unsigned int pos)const {
    if ((!this->vacia())&&(pos>=1)&&(pos<=contador_nodos)){
        nodo*aux=lista;
        int i=1;
        while (i<pos){
            aux=aux->sig;
            i+=1;
            }
        return aux->valor;
    }
}

template <typename elem> void Lista<elem>::eliminarElem(unsigned int pos){
    if (!this->vacia()){
        nodo*aux=lista;
        if (pos==1){ //SI QUIERO ELIMINAR EL PRIMER NODO
            lista=lista->sig;
        }else{
            if ((pos>1)&&(pos<=contador_nodos)){ //PARA ELIMINAR EL ULTIMO Y EL DEL MEDIO
            int i=1;
            while (i<pos){
                aux=aux->sig;
                i++;
            }
            aux->sig=aux->sig->sig;
            aux=aux->sig;
            }
        }
        delete aux;
        contador_nodos-=1;
    }

}

template class Lista<int>;
