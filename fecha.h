#ifndef FECHA_H
#define FECHA_H

class Fecha {
private:
    int dia, mes, anio, hora, min, seg;

public:
    Fecha();
    Fecha(int d, int m, int anyo, int h, int mins, int s);

    bool guardarFecha(int day, int month, int year, int haur, int minuts, int sec);
    void mostrarFecha();
    int compararFechas(Fecha f1, Fecha f2);
    int getDia();
    int getMes();
    int getAnio();
    int getHora();
    int getMinutos();
    int getSegundos();
};

#endif