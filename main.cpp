#include <iostream>
#include <string>
#include "cuack.h"
#include "fecha.h"
using namespace std;

int main() {
    string tcuac, usuario, mensaje1;
    int mensaje2;
    int dia, mes, anio, hora, minutos, seg;
    char sep1, sep2, sep3, sep4;

    int capacidad = 2;
    int cont = 0;
    Cuack* arrCuac = new Cuack[capacidad];

    while (cin >> tcuac) {
        if (tcuac != "mcuac" && tcuac != "pcuac") break;

        Cuack CuacTemp;
        Fecha FechaTemp;

        cin >> usuario;
        cin >> dia >> sep1 >> mes >> sep2 >> anio >> hora >> sep3 >> minutos >> sep4 >> seg;
        FechaTemp.guardarFecha(dia, mes, anio, hora, minutos, seg);

        if (cont == capacidad) {
            capacidad *= 2;
            Cuack* nuevoArr = new Cuack[capacidad];
            for (int i = 0; i < cont; i++) {
                nuevoArr[i] = arrCuac[i];
            }
            delete[] arrCuac;
            arrCuac = nuevoArr;
        }

        if (tcuac == "mcuac") {
            cin.ignore();
            getline(cin, mensaje1);
            if (CuacTemp.guardarCuac(usuario, FechaTemp, mensaje1)) {
                arrCuac[cont++] = CuacTemp;
            }
        } else if (tcuac == "pcuac") {
            cin >> mensaje2;
            string msg = CuacTemp.cambiar_mensaje(mensaje2);
            if (CuacTemp.guardarCuac(usuario, FechaTemp, msg)) {
                arrCuac[cont++] = CuacTemp;
            }
        }

    }

    for (int i = 0; i < cont; i++){
            cout << i + 1 << " cuac" << endl;
            arrCuac[i].mostrarCuac();
    }

    delete[] arrCuac;
    return 0;
}
