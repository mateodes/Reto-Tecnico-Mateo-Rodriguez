#ifndef DTCATEGORIA
#define DTCATEGORIA
#include<string>
#include <cstdlib>
using namespace std;
class DtCategoria {
  private:
    int nivel;
    int cantPreguntas;
  public:
    DtCategoria();
    DtCategoria(int nivel,int cantPreguntas);
    int getNivel();
    void setNivel(int nivel);
    int getCantPreguntas();
    void setCantPreguntas(int cantPreguntas);
    ~DtCategoria();

    friend ostream& operator <<(ostream&,DtCategoria&);
};
#endif