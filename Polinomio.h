#ifndef POLINOMIO_H
#define POLINOMIO_H


class Polinomio
{
    public:
        //CONSTRUCTORES
        Polinomio();
        void aniadir(float coef,int exp);

        //OBSERVADORAS
        float evaluar(float valor)const;
        float coeficiente(int exp)const;

        //MODIFICADORAS

        void suma(const Polinomio &otroPoli);

        //DESTRUCTOR
        //virtual ~Polinomio();

    protected:

    private:

        struct monomio{
            float coeficiente;
            int exponente;
            monomio*sig;
        };

        monomio*polinomio;
};

#endif // POLINOMIO_H
