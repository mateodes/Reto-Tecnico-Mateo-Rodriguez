#include "DtRonda.h"
DtRonda::DtRonda(){}
DtRonda::DtRonda(int numRonda,int premio,DtCategoria* categoria){
    this->numRonda=numRonda;
    this->premio=premio;
    this->categoria=categoria;
}
int DtRonda::getNumRonda(){
    return this->numRonda;
}
int DtRonda::getPremio(){
    return this->premio;
}
DtCategoria* DtRonda::getCategoria(){
    return this->categoria;
}
DtRonda::~DtRonda(){}

ostream& operator <<(ostream& salida, DtRonda& ronda){
  
    cout << "Numero de ronda: " << ronda.numRonda << "\nPremio : " <<  ronda.premio  << "\nCategoria : " <<  ronda.categoria  << endl;
    return salida;
  
}