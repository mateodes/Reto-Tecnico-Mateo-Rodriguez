#ifndef JUGADOR
#define JUGADOR
#include<string>
using namespace std;
class Jugador{
    private:
        string nombre;
        int premioObtenido;
    public:
        Jugador(string,int);
        string GetNombre();
        void setNombre(string);
        int getPremio();
        void setPremio(int);
        ~Jugador();

}
#endif