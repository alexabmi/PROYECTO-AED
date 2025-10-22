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

bool Fecha::guardarFecha(int day, int month, int year, int haur, int minuts, int sec) {
    if (day < 1 || day > 31) return false;
    if (month < 1 || month > 12) return false;
    if (haur < 0 || haur > 23) return false;
    if (minuts < 0 || minuts > 59) return false;
    if (sec < 0 || sec > 59) return false;
    this->dia = day;
    this->mes = month;
    this->anio = year;
    this->hora = haur;
    this->min = minuts;
    this->seg = sec;
    return true;
}

void Fecha::mostrarFecha() {
    string horaf, minf, segf;

    if (hora < 10) {
        horaf = "0" + to_string(hora);
    } else {
        horaf = to_string(hora);
    }

    if (min < 10) {
        minf = "0" + to_string(min);
    } else {
        minf = to_string(min);
    }

    if (seg < 10) {
        segf = "0" + to_string(seg);
    } else {
        segf = to_string(seg);
    }

    cout << dia << "/" << mes << "/" << anio << " " << horaf << ":" << minf << ":" << segf;
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
int Fecha::getHora() { return hora; }
int Fecha::getMinutos() { return min; }
int Fecha::getSegundos() { return seg; }
