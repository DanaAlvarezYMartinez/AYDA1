#include "Circulo.h"
#include <math.h>
#define _USE_MATH_DEFINES

Circulo::Circulo(Punto p, float radio){
    this -> p=p;
    this -> radio=radio;
}

float Circulo::Radio()const{
    return radio;
}

float Circulo::Perimetro()const{
    return 2*M_PI*radio;
}

float Circulo::Area()const{
    return 2*M_PI*pow(radio,2);
}

void Circulo::Trasladar(float x, float y){
    this -> p.Trasladar(x,y);
}
