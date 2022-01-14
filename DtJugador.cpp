#include "DtJugador.h"
DtJugador::DtJugador(){}
DtJugador::DtJugador(string nombre,int premio){
  this->nombre=nombre;
  this->premioObtenido=premio;
}
string DtJugador::getNombre(){
  return this->nombre;
}
int DtJugador::getPremio(){
  return this->premio;
}
DtJugador::~DtJugador(){}

ostream& operator <<(ostream& salida,const DtJugador& jugador){
  cout << "NOMBRE " << jugador.nombre << "\nPREMIO OBTENIDO " << jugador.premioObtenido << endl;
  return salida;
}