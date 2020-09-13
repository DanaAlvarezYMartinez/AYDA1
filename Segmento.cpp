#include "Segmento.h"

Segmento::Segmento(Punto a, Punto b)
{
    this -> a=a;
    this -> b=b;
}

Punto Segmento::extremo1()const{
    return a;
}

Punto Segmento::extremo2()const{
    return b;
}

float Segmento::longitud()const{
    return a.distancia(b);
}

bool Segmento::operator==(const Segmento & otroSegmento)const{
    return ((a==otroSegmento.extremo1())&&(b==otroSegmento.extremo2()));

}

void Segmento::trasladar(float x, float y){
    this -> a.Trasladar(x,y);
    this -> b.Trasladar(x,y);
}
