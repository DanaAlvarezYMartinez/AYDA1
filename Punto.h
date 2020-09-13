#ifndef PUNTO_H
#define PUNTO_H


class Punto
{
    public:
        //CONSTRUCTORAS
        Punto();
        Punto (float x, float y);

        //OBSERVADORAS
        float coordenada_x()const;
        float coordenada_y()const;
        float distancia(const Punto & otroPunto)const;  //PONGO OTRO PUNTO PORQUE ES CON EL QUE VOY A COMPARAR, EL PUNTO ORIGINAL YA ESTA IMPLICITO
        bool operator==(const Punto & otroPunto)const;
        //Punto & operator= (const Punto & otroPunto);
        //MODIFICADORAS
        void Trasladar(float z, float t); //PONGO SOLO LOS FLOATS PORQUE EL PUNTO YA ESTA IMPLICITO, ES EL QUE VA  ALLAMAR AL METODO

        //DESTRUCTOR
        //virtual ~Punto();

    protected:

    private:
        float x;
        float y;
};

#endif // PUNTO_H
