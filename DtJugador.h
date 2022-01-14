#ifndef DTJUGADOR
#define DTJUGADOR
#include<string>
#include<iostream>
using namespace std;
class DtJugador{
    private:
        string nombre;
        int premioObtenido;
    public:
        DtJugador();
        DtJugador(string,int);
        string getNombre();
        int getPremio();

        friend ostream& operator <<(ostream&,const DtJugador&);
};
#endif