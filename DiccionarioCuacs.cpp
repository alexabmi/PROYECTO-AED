#include <iostream>
#include <string>
#include "DiccionarioCuacs.h"
#include "cuack.h"
#include "fecha.h"

using namespace std;

DiccionarioCuacs::DiccionarioCuacs() {
    contador=0;
}

void DiccionarioCuacs::insertar(Cuack nuevo){
    lista.push_back(nuevo);
    contador++;
}

void DiccionarioCuacs::last(int N){
    lista.sort(DiccionarioCuacs::compararCuacks);
    int cont=0;
    int contador=0;
    for (auto it = lista.begin(); it != lista.end() && contador < N; ++it, ++contador) {
        cont++;
        cout << cont << ". ";
        it->mostrarCuac();
    }
    cout << "Total: " << cont << " cuac" << endl;
}

void DiccionarioCuacs::follow(string nombre) {
    lista.sort(DiccionarioCuacs::compararCuacks);
    int cont = 0;
    for (auto it = lista.begin(); it != lista.end(); ++it) {
        if (it->getUsuario() == nombre) {
            cont++;
            cout << cont << ". ";
            it->mostrarCuac();
        }
    }
    cout << "Total: " << cont << " cuac" << endl;
}


void DiccionarioCuacs::date(Fecha f1, Fecha f2){
    lista.sort(DiccionarioCuacs::compararCuacks);
    int cont=0;

    for (auto it = lista.begin(); it != lista.end(); ++it){
        Fecha f_cuac = it->getFecha();
        if (Fecha::compararFechas(f1, f_cuac) >= 0 && Fecha::compararFechas(f2, f_cuac) <= 0) {
            cont++;
            cout << cont << ". ";
            it->mostrarCuac();
        }
    }
    cout << "Total: " << cont << " cuac" << endl;
}

bool DiccionarioCuacs::compararCuacks(Cuack a, Cuack b) {
    int comparar = Fecha::compararFechas(a.getFecha(), b.getFecha());
    if (comparar != 0){
        return comparar < 0;
    }
    if (a.getMensaje() != b.getMensaje()){
        return a.getMensaje() < b.getMensaje();
    }
    return a.getUsuario() < b.getUsuario();
}
