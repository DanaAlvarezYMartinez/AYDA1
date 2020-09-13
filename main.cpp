#include <iostream>
#include "Punto.h"
#include "Segmento.h"
#include "Circulo.h"
#include "Conjunto.h"

using namespace std;

int main()
{
    Punto puntito(1,2);
    Punto puntillo(3,4);
    float distancia= puntito.distancia(puntillo);

    //PUNTO ANDA

    Segmento segmentito(puntito, puntillo);
    cout << segmentito.longitud()<<endl;
    segmentito.trasladar(1,2);
    cout << segmentito.longitud()<<endl;

    //SEGMENTO ANDA

    Circulo circulito(puntito,4);
    cout<<circulito.Perimetro()<<endl;

    //CIRCULO ANDA

    Conjunto<int> conjuntito;
    conjuntito.agregarElem(5);
    cout<<conjuntito.longitud()<<endl;
    conjuntito.agregarElem(5); //no lo agrego, BIEEEEEN
    cout<<conjuntito.longitud()<<endl;
    conjuntito.eliminarElem(5);
    cout<<conjuntito.longitud()<<endl;
}
