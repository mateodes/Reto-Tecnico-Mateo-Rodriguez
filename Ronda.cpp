#include "Ronda.h"
#include "Categoria.h"
#include "DtCategoria.h"
Ronda::Ronda(int numRonda,int premio){
  this->numRonda=numRonda;
  this->premio=premio;
}

int Ronda::GetNumRonda(){
  return this->numRonda;
}
void Ronda::setNumROnda(int numRonda){
  this->numRonda=numRonda;
}
int Ronda::getPremio(){
  return this->premio;
}
void Ronda::setPremio(int premio){
  this->premio=premio;
}
Categoria Ronda::getCategoria(){
    return this->categoria;
}
void Ronda::setCategoria(Categoria* categoria){
    this->categoria=categoria;
}


Ronda::~Ronda(){}