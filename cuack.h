// cuack.h
#ifndef CUACK_H
#define CUACK_H

#include <string>
#include "fecha.h"
using namespace std;

class Cuack {
private:
    string nombre_usuario;
    Fecha f;
    string texto;

public:
    Cuack();
    Cuack(string nombre, Fecha fecha, string mensaje);

    bool guardarCuac(string user, Fecha fecha, string msg);
    void mostrarCuac();
    string cambiar_mensaje(int numero);
};

#endif
