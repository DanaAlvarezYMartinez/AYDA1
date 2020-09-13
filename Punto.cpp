#include "Punto.h"
#include <math.h>

Punto::Punto()
{
    //constructor vacio
}

Punto::Punto(float x,float y){
    //constructor con algo
    this -> x=x;
    this -> y=y;
}

float Punto::coordenada_x()const {
    return x;
}

float Punto::coordenada_y()const {
    return y;
}

float Punto::distancia(const Punto & otroPunto)const{
    return sqrt(pow((x-otroPunto.coordenada_x()),2)+ pow((y-otroPunto.coordenada_y()),2));

}

bool Punto::operator==(const Punto & otroPunto)const{
    return ((x==otroPunto.coordenada_x())&&(y==otroPunto.coordenada_y()));
}
/*
Punto & Punto::operator=(const Punto & otroPunto)
{
    this -> x=otroPunto.coordenada_x();
    this -> y=otroPunto.coordenada_y();
    return *this;
}*/

void Punto::Trasladar(float z, float t){
    this ->x+=z;
    this ->y+=t;
}
