// cuack.h
#ifndef CUACK_H
#define CUACK_H

#include <string>
#include "fecha.h"

class Cuack {
private:
    std::string nombre_usuario;
    Fecha f;
    std::string texto;

public:
    Cuack();
    Cuack(std::string nombre, Fecha fecha, std::string mensaje);

    bool guardarCuac(std::string user, Fecha fecha, std::string msg);
    void mostrarCuac();
    std::string cambiar_mensaje(int numero);
};

#endif
