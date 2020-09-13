#ifndef SEGMENTO_H
#define SEGMENTO_H
#include "Punto.h"

class Segmento
{
    public:

        //CONSTRUCTORES
        Segmento(Punto c, Punto d);

        //OBSERVADORAS
        Punto extremo1()const;
        Punto extremo2()const;
        float longitud()const;
        bool operator==(const Segmento & otroSegmento)const;

        //MODIFICADORAS
        void trasladar(float x, float y);

        //DESTRUCTOR
        //virtual ~Segmento();

    protected:

    private:
        Punto a,b;
};

#endif // SEGMENTO_H
