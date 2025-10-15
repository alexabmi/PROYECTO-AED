#include <iostream>
#include <string>

using namespace std;

class Fecha{
    private :
        int dia, mes, anio, hora, min, seg;

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
			string horaf, minf, segf;
			
            if (hora < 10){
                horaf = "0" + to_string(hora);
            } else {
                horaf = to_string(hora);
            }
            
            if (min < 10){
                minf = "0" + to_string(min);
            } else {
                minf = to_string(min);
            }

            if (seg < 10){
                segf = "0" + to_string(seg);
            } else {
                segf = to_string(seg);
            }
			
            cout<<dia<<"/"<<mes<<"/"<<anio<<" "<<horaf<<":"<<minf<<":"<<segf;

            
        }

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

    class 

int main (void){


    int n;

    cin >> n;
    Fecha* arrFechas= new Fecha[n];

    int cant=0;

    for(int i=0; i<n;i++){
        int anyo1, mes1, dia1,hora1,min1,seg;
        char sep1,sep2,sep3,sep4;
        cin >> dia1 >> sep1 >> mes1 >> sep2 >> anyo1 >> hora1 >> sep3 >> min1 >> sep4 >> seg;
        Fecha FechaTemp;
        if (FechaTemp.guardarFecha(dia1,mes1,anyo1,hora1,min1,seg)){
            arrFechas[cant]= FechaTemp;
            cant++;
            }
    }

for (int i = 1; i < n; i++) {
    int res = arrFechas[i].compararFechas(arrFechas[i], arrFechas[i-1]);

    if (res < 0) { // fecha i < i-1
        arrFechas[i].mostrarFecha();
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
