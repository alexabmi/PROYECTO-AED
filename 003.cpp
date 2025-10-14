#include<iostream>
using namespace std;

//creamos una clase fecha

class Fecha{

//primero declaramos los atributos
    private :
        int dia ;
        int mes ;
        int anio ;
        int hora;
        int min;
        int seg;

//seguidamente un constructor
    public:
        Fecha(){
            dia = 1;
            mes = 1;
            anio = 2000;
            hora = 0;
            min = 0;
            seg = 0;
                }
        Fecha(int d,int m,int anyo,int h,int min,int s){
        this->dia = d;
        this->mes = m;
        this->anio = anyo;
        this->hora = h;
        this->min = min;
        this->seg = s;
        
    
        }
//metodos

    public:
        bool guardarFecha(int day,int month,int year,int haur,int minuts,int sec){
        if(day<1 || day >31) return false ;
        if(month<1 || month>12) return false;
        if(haur<0 || haur> 23)return false;
        if(minuts<0 || minuts>59) return false;
        if(sec<0 || sec>59)return false;
        this->dia = day;
        this->mes = month;
        this->anio = year;
        this->hora = haur;
        this->min = minuts;
        this->seg = sec;
        return true;
        }
    
    public :
        void mostrarFecha(){
        cout<<dia<<"/"<<mes<<"/"<<anio<<" "<<hora<<":"<<min<<":"<<seg;
        }
    //metodo comparar fechas si es mayor menos o igual q la aneterior

    //retornamos 3 valores 1 si la fecha 2 es mayor q la 1 ;0 si son iguales y -1 si es menor
    public :
        int compararFechas(Fecha f1, Fecha f2){
            if(f2.anio>f1.anio)return 1;
            if(f2.anio<f1.anio) return -1;
            
            if(f2.mes>f1.mes) return 1;
            if(f2.mes<f1.mes) return -1;

            if(f2.dia>f1.dia) return 1;
            if(f2.dia<f1.dia) return -1;
            
            if(f2.hora>f1.hora) return 1;
            if(f2.hora<f1.hora) return -1;

            if(f2.min>f1.min) return 1;
            if(f2.min<f1.min) return -1;
                        
            if(f2.seg>f1.seg) return 1;
            if(f2.seg<f1.seg) return -1;

            return 0;

        }
    };
int main (void){


    int testCase;

    //cout<<"Introduce una seria de testcase";
    cin>>testCase;
    Fecha* arrFechas= new Fecha[testCase];

    int cant=0;

    for(int i=0; i<testCase;i++){
        int anyo1, mes1, dia1,hora1,min1,seg;
        char sep1,sep2,sep3,sep4;
        cin>>dia1>> sep1 >> mes1>> sep2 >>anyo1>>hora1 >> sep3>>min1>> sep4>>seg;
        //DD/MM/AAAA  HH/MM
        Fecha FechaTemp;
        if (FechaTemp.guardarFecha(dia1,mes1,anyo1,hora1,min1,seg)){
            arrFechas[cant]= FechaTemp;
            cant++;
            }/**/
        //con el push_back introducimos Fecha temp al fina del vector arrfechas
    }

//hacemos la comparacion de fechas 

for (int i = 1; i < testCase; i++) {
    int res = arrFechas[i].compararFechas(arrFechas[i], arrFechas[i-1]);

    if (res < 0) { // fecha i < i-1
        arrFechas[i].mostrarFecha();      // primero la más antigua
        cout << " ES POSTERIOR A ";
        arrFechas[i-1].mostrarFecha();
    } else if (res > 0) { // fecha i > i-1
        arrFechas[i].mostrarFecha();
        cout << " ES ANTERIOR A ";
        arrFechas[i-1].mostrarFecha();
    } else { // iguales
        arrFechas[i].mostrarFecha();
        cout << " ES IGUAL A ";
        arrFechas[i-1].mostrarFecha();
    }
    cout << "\n";
}


    delete[] arrFechas;    
    return 0;
}
        
