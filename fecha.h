#ifndef FECHA_H
#define FECHA_H
#include <string>

class Fecha {
private:
    int dia, mes, anio, hora, min, seg;

public:
    Fecha();
    Fecha(int d, int m, int anyo, int h, int mins, int s);

    bool guardarFecha();
    void mostrarFecha();
    int compararFechas(Fecha f1, Fecha f2);
    int getDia();
    int getMes();
    int getAnio();
    std::string getHora();
    std::string getMinutos();
    std::string getSegundos();
};

#endif