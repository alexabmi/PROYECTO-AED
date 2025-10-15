#include<iostream>
#include<string>

using namespace std;


class Cuack
{
    //declaramos las propiedades
private: 
    string nombre_usuario; 
    Fecha f;
    string texto; 
public:
//constructor
    Cuack();
    Cuack(string nombre,Fecha fecha,string mensaje){
    this->nombre_usuario=nombre;
    this->f=fecha;
    this->texto=mensaje;
    };
};


