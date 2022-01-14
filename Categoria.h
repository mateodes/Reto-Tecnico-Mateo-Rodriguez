#ifndef CATEOGRIA
#define CATEGORIA
#include<string>
#include <cstdlib>
#include "Pregunta.h"
#include "DtPregunta.h"
using namespace std;
class Categoria{
    private:
        int nivel;
        Pregunta* preguntas[PREGUNTAS_CAT];
        int cantPreguntas;
    public:
        Categoria();
        Categoria(int);
        int GetNivel();
        void setNivel(int);
        ~Categoria();
        int getCantPreguntas();
        void agregarPregunta(Pregunta* pregunta);
        DtPregunta** getDtPreguntas();

}
#endif