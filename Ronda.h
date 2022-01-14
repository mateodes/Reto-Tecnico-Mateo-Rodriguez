#ifndef RONDA
#define RONDA
#include<string>
#include "Categoria.h"
using namespace std;
class Ronda{
    private:
        int numRonda;
        int premio;
        Categoria* categoria;
    public:
        Ronda(int,int);
        int GetNumRonda();
        void setNumROnda(int);
        int getPremio();
        void setPremio(int);
        ~Ronda();
        void setCategoria(Categoria*);
        Categoria* getCategoria();

}
#endif