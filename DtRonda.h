#ifndef DTRONDA
#define DTRONDA
#include "DtCategoria.h"
class DtRonda{
    private:
        int numRonda;
        int premio;
        DtCategoria* categoria;
    public:
        DtRonda();
        DtRonda(int,int,DtCategoria*);
        int getNumRonda();
        int getPremio();
        DtCategoria* getCategoria();
        ~DtRonda();

        friend ostream& operator <<(ostream&, DtRonda&);
};
#endif