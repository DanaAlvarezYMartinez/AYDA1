#ifndef CONJUNTO_H
#define CONJUNTO_H
#include <list>
using namespace std;

template <typename elem>
class Conjunto
{
    public:
        //CONSTRUCTORES
        Conjunto();
        void agregarElem(const elem & valor);

        //OBSERVADORAS
        bool existeElem(const elem & buscado)const;
        bool vacio()const;
        int longitud()const;
        elem getElem()const;

        //MODIFICADORAS
        void eliminarElem(const elem & aEliminar);
        void Union(const Conjunto & otroConjunto);
        void interseccion(const Conjunto & otroConjunto);

        //DESTRUCTOR
        //virtual ~Conjunto();

    protected:

    private:
        list <elem> conjunto;
};

#endif // CONJUNTO_H
