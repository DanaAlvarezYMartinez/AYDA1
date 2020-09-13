#ifndef CIRCULO_H
#define CIRCULO_H
#include "Punto.h"

class Circulo
{
    public:
        //CONSTRUCTOR
        Circulo(Punto p, float radio);

        //OBSERVADORAS
        float Radio()const;
        float Perimetro()const;
        float Area()const;

        //MODIFICADORA
        void Trasladar(float x,float y);

        //DESTRUCTOR
        //virtual ~Circulo();


    protected:

    private:
        float radio;
        Punto p;
};

#endif // CIRCULO_H
