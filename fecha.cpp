#include <iostream>
#include <string>
#include "fecha.h"

using namespace std;

Fecha::Fecha() {
    dia = 1;
    mes = 1;
    anio = 2000;
    hora = 0;
    min = 0;
    seg = 0;
}

Fecha::Fecha(int d, int m, int anyo, int h, int min, int s) {
    this->dia = d;
    this->mes = m;
    this->anio = anyo;
    this->hora = h;
    this->min = min;
    this->seg = s;
}


bool Fecha::guardarFecha() {
    int day, month, year, hour, minuts, sec;
    char sep;
    cin >> day >> sep >> month >> sep >> year >> hour >> sep >> minuts >> sep >> sec;
    this->dia = day;
    this->mes = month;
    this->anio = year;
    this->hora = hour;
    this->min = minuts;
    this->seg = sec;
    return true;
}

void Fecha::mostrarFecha() {
    // Día y mes sin ceros
    cout << dia << "/" << mes << "/" << anio << " ";

    // Hora con ceros
    if (hora < 10) cout << "0";
    cout << hora << ":";

    if (min < 10) cout << "0";
    cout << min << ":";

    if (seg < 10) cout << "0";
    cout << seg;
}


int Fecha::compararFechas(Fecha f1, Fecha f2) {
    if (f2.anio > f1.anio) return 1;
    if (f2.anio < f1.anio) return -1;

    if (f2.mes > f1.mes) return 1;
    if (f2.mes < f1.mes) return -1;

    if (f2.dia > f1.dia) return 1;
    if (f2.dia < f1.dia) return -1;

    if (f2.hora > f1.hora) return 1;
    if (f2.hora < f1.hora) return -1;

    if (f2.min > f1.min) return 1;
    if (f2.min < f1.min) return -1;

    if (f2.seg > f1.seg) return 1;
    if (f2.seg < f1.seg) return -1;

    return 0;
}

int Fecha::getDia() { return dia; }
int Fecha::getMes() { return mes; }
int Fecha::getAnio() { return anio; }
string Fecha::getHora() {
    if (hora < 10){
        string horaf = "0" + to_string(hora);
        return horaf;
    } else {
        string horaf = to_string(hora);
        return horaf;
    }
}

string Fecha::getMinutos() {
    if (min < 10){
        string minf = "0" + to_string(min);
        return minf;
    } else {
        string minf = to_string(min);
        return minf;
    }
}
string Fecha::getSegundos() {
    if (seg < 10){
        string segf = "0" + to_string(seg);
        return segf;
    } else {
        string segf = to_string(seg);
        return segf;
    }
}
