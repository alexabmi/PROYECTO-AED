#include <iostream>
#include <string>
#include "fecha.h"
#include "cuack.h"
#include "interprete.h"

using namespace std;

void Interprete(string comando){
    if (comando == "mcuac") procesar_mcuac();
    if (comando == "pcuac") procesar_pcuac();
    if (comando == "last") procesar_last();
    if (comando == "follow") procesar_follow();
    if (comando == "date") procesar_date();
    if (comando == "tag") procesar_tag();
}

Cuack Actual;
Fecha FechaTemp;
string usuario, mensaje_mcuac;
int dia, mes, anio, hora, minutos, seg, mensaje_tcuac;
int contador = 0;
char sep;

void procesar_mcuac(){
    cin >> usuario;
    FechaTemp.guardarFecha();
    cin.ignore();
    getline(cin, mensaje_mcuac);
    Actual.guardarCuac(usuario, FechaTemp, mensaje_mcuac);
    contador++;
    cout << contador << " cuac" << endl;
}

void procesar_pcuac(){
    Cuack CuackTemp;
    cin >> usuario;
    FechaTemp.guardarFecha();
    cin >> mensaje_tcuac;
    string msg = CuackTemp.cambiar_mensaje(mensaje_tcuac);
    Actual.guardarCuac(usuario, FechaTemp, msg);
    contador++;
    cout << contador << " cuac" <<  endl;
}

void procesar_last(){
    int numero;
    cin >> numero;
    cout << "last " << numero << endl;
    Actual.mostrarCuac();
}

void procesar_follow(){
    string user;
    cin >> user;
    cout << "follow " << user << endl;
    Actual.mostrarCuac();
}

void procesar_date(){
    string linea;
    cin.ignore();
    getline(cin, linea);
    cout << "date " << linea << endl;
    Actual.mostrarCuac();
}

void procesar_tag(){
    string linea;
    cin.ignore();
    getline(cin, linea);
    cout << "tag " << linea << endl;
    Actual.mostrarCuac();
}

