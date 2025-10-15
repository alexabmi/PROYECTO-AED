#ifndef CUAC_H
#define CUAC_H

#include <string>
#include "fecha.h"

using namespace std;

class Cuack{
    private:
        string nombre_usuario;
        Fecha f;
        string texto;
    
    public:
    //constructor vacio
        Cuack();
        Cuack(string nombre,Fecha fecha,string mensaje);
        
        void guardarCuac(string user,Fecha fecha,string msg);
        void mostrarCuac();
        string cambiar_mensaje(int numeros);
};