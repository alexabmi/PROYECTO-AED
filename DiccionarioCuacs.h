#ifndef DICCIONARIOCUACS_H
#define DICCIONARIOCUACS_H

#include <list>
#include "cuack.h"
#include "fecha.h"

class DiccionarioCuacs {
    private:
        std::list<Cuack> lista;
        int contador;
    public:
        DiccionarioCuacs ();
        void insertar (Cuack nuevo);
        void last (int N);
        void follow (std::string nombre);
        void date (Fecha f1, Fecha f2);
        int numElem () {return contador;}
        static bool compararCuacks(Cuack a, Cuack b);
};

#endif