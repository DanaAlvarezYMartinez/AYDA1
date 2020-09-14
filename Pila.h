#ifndef PILA_H
#define PILA_H
#include <list>

using namespace std;

template <typename elem>
class Pila
{
    public:
        //CONSTRUCTORES
        Pila();
        void apilar(const elem & valor);

        //OBSERVADORAS

        bool vacia()const;
        elem tope()const;

        //MODIFICADORA
        void desapilar ();

        //DESTRUCTOR
        //virtual ~Pila();

    protected:

    private:
        list<elem> pila;
};

#endif // PILA_H
