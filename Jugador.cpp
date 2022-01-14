#include Jugador.h
Jugador::Jugador(string nombre, int premio){
    this->nombre=nombre;
    this->premioObtenido=premio;
}
string Jugador::getNombre(){
    return this->nombre;
}
void Jugador::setNombre(string nombre){
    this->nombre=nombre;
}
int Jugador::getPremio(){
    return this->premioObtenido;
}
void Jugador::setPremio(){
    this->premioObtenido=premio;
}
Jugador::~Jugador(){}