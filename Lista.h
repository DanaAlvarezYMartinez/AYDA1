#ifndef LISTA_H
#define LISTA_H

using namespace std;

template <typename elem>

class Lista
{
    public:
        //CONSTRUCTOR
        Lista();
        void addElem(const elem & valor, unsigned int pos);

        //OBSERVADORAS
        int longitud()const;
        bool vacia()const;
        elem getElem(unsigned int pos)const;

        //MODIFICADORAS
        void eliminarElem(unsigned int pos);

        //DESTRUCTOR
        //virtual ~Lista();

    protected:

    private:

        //armo lo que va a tener el nodo
        struct nodo {
            elem valor;
            nodo*sig; //pumtero al sig, como en prog2
        };

        nodo*lista;
        nodo*ultimo;
        int contador_nodos=0;
};

#endif // LISTA_H
