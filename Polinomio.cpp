#include "Polinomio.h"
#include <math.h>

Polinomio::Polinomio()
{
   this->polinomio=nullptr; //ctor
}

void Polinomio::aniadir(float coef,int exp){
    if (polinomio==nullptr){ //si no hay ningun coeficiente
        //MI NODO NUEVO SE VUELVE MI POLINOMIO
        monomio*aux=new monomio;
        aux->coeficiente=coef;
        aux->exponente=exp;
        aux->sig=nullptr;
        polinomio=aux;
    }
    else{//primero me fijo si ya existe algo con ese exponente
        monomio*aux=polinomio;
        while((aux->sig!=nullptr)&&(aux->exponente!=exp)){
            aux=aux->sig;
        }
        if (aux->exponente==exp)
            aux->coeficiente+=coef; //SI ES EL MISMO EXPONENTE, SUMO LOS COEFICIENTES
        else { //SINO SALIO PORQUE YA NO HYA NADA CREO NUEVO NODO
            monomio*nuevo=new monomio;
            nuevo->coeficiente=coef;
            nuevo->exponente=exp;
            nuevo->sig=nullptr;
            aux->sig=nuevo;
        }
    }
}

float Polinomio::evaluar(float valor)const{
    monomio*aux=polinomio;
    if (aux==nullptr)
        return 0;
    else{
        float resultado=0;
        while (aux!=nullptr){
            resultado+=((aux->coeficiente)*(pow(valor,aux->coeficiente)));
            aux=aux->sig;
        }
        return resultado;
    }
}

float Polinomio::coeficiente(int exp)const{
    monomio*aux=polinomio;
    if (aux==nullptr)
        return 0;
    else{
        while ((aux!=nullptr)&&(aux->exponente!=exp))
            aux=aux->sig;
        if (aux->exponente==exp)
            return aux->coeficiente;
        if (aux==nullptr);
            return 0;
    }
}

void Polinomio::suma(const Polinomio & otroPoli){
    monomio*p1=polinomio; //puntero al polinomio 1
    monomio*p2=otroPoli.polinomio; //puntero al polinomio 2

    while (p1!=nullptr){ //para cada cosa del primer polinomio
        while ((p2->sig!=nullptr)&&(p2->exponente!=p1->exponente)){
             p2=p2->sig;
        } //si los coeficientes son distintos avanzo

        if (p2->exponente==p1->exponente)
            p1->coeficiente+=p2->coeficiente; //sumo los coeficientes. Si es null nada porque significa que no lo encontro
        p2=otroPoli.polinomio; //reseteo el p2 desde el principio
        p1=p1->sig;
    }
}
