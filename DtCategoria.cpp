#include "DtCategoria.h"
DtCategoria::DtCategoria(){}
DtCategoria::DtCategoria(int nivel, int cantPreguntas){
  this->nivel=nivel;
  this->cantPreguntas=cantPreguntas;
}

int DtCategoria::getNivel(){
  return this->nivel;
}
void DtCategoria::setNivel(int nivel){
  this->nivel=nivel;
}
int DtCategoria::getCantPreguntas(){
  return this->cantPreguntas;
}
void DtCategoria::setCantPreguntas(int cantPreguntas){
  this->cantPreguntas=cantPreguntas;
}
DtCategoria::~DtCategoria(){}

ostream& operator <<(ostream& salida,DtCategoria& categoria){
  cout << "Categoria nivel: " << categoria.nivel << endl;
  return salida;
}