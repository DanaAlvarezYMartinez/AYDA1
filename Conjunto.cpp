#include "Conjunto.h"

template <typename elem> Conjunto<elem>::Conjunto()
{
    //ctor
}

template <typename elem> bool Conjunto<elem>::vacio()const{
    if (conjunto.size()==0)
        return true;
    else
        return false;
}

template <typename elem> bool Conjunto<elem>::existeElem(const elem & buscado)const{
    typename list <elem>::const_iterator it =conjunto.begin(); //ponele que un iterador se hace asi
    while ((*it != buscado)&&(it != conjunto.end()))
        ++it;
   if (*it==buscado)
        return true;
    else
        return false;
}

template <typename elem> void Conjunto<elem>::agregarElem(const elem & valor){
    if (this -> existeElem(valor)==false)
        conjunto.push_back(valor);
    /*else
        cout<<"ya existe"<<endl;*/
}




template <typename elem> int Conjunto <elem>::longitud()const{
    typename list <elem>::const_iterator it =conjunto.begin(); //ponele que un iterador se hace asi
    int longitud=0;
    while (it!=conjunto.end()){
        longitud+=1;
        ++it;
    }
    return longitud;
}

template <typename elem> elem Conjunto<elem>::getElem()const{
    if (!this -> vacio())
        return conjunto.front(); //NO SE EHHHH
   /* else
        cout<<"esta vacio"<<endl;*/
}

template <typename elem> void Conjunto<elem>::eliminarElem(const elem & aEliminar){
   if (!this->vacio()){
        typename list <elem>::iterator it=conjunto.begin();
        while (*it !=aEliminar)
            ++it;
        if (*it==aEliminar)
            conjunto.erase(it);
   }
   /*else
        cout<<"esta vacio"<<endl;*/
}

/*template <typename elem> void Conjunto<elem>::Union(const Conjunto &otroConjunto){
    typename list <elem>::iterator aux= otroConjunto.begin();
    while (aux!=otroConjunto.end()){  //mientras no llegue al final del otro conjunto
        conjunto.agregarElem(*aux);
    }
}

template <typename elem> void Conjunto<elem>::interseccion(const Conjunto &otroConjunto){
    typename list <elem>::iterator it=conjunto.begin();
    while (it != conjunto.end()){
        bool esta=otroConjunto.existeElem(*it);
        if (!esta) //si no esta
            conjunto.eliminarElem(*it);
        ++it;
    }
}
*/
template class Conjunto<int>;
