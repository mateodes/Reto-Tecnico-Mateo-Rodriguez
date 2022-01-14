#include "DtPregunta.h"
DtPregunta::DtPregunta(){}
DtPregunta::DtPregunta(string pregunta,string opcion1,string opcion2,string opcion3,string opcion4,string opcionCorrecta){
  this->pregunta=pregunta;
  this->opcion1=opcion1;
  this->opcion2=opcion2;
  this->opcion3=opcion3;
  this->opcion4=opcion4;
  this->opcionCorrecta=opcionCorrecta;
}
string DtPregunta::getPregunta(){
  return this->pregunta;
}
string DtPregunta::getOpcion1(){
  return this->opcion1;
}
string DtPregunta::getOpcion2(){
  return this->opcion2;
}
string DtPregunta::getOpcion3(){
  return this->opcion3;
}
string DtPregunta::getOpcion4(){
  return this->opcion4;
}
string DtPregunta::getOpcionCorrecta(){
  return this->opcionCorrecta;
}
DtPregunta::~DtPregunta(){}

ostream& operator <<(ostream& salida,const DtPregunta& pregunta){
  cout << "Pregunta: " << pregunta.pregunta "\nOpcion 1 " << pregunta.opcion1 << "\nOpcion 2 " << pregunta.opcion2 << "\nOpcion 3 " << pregunta.opcion3 << "\nOpcion 4 " << pregunta.opcion4 << endl;
  return salida;
}