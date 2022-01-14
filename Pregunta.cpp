#include "Pregunta.h"
Pregunta::Pregunta(string pregunta,string opcion1,string opcion2, string opcion3, string opcion4,int opcionCorrecta){
    this->pregunta=pregunta;
    this->opcion1=opcion1;
    this->opcion2=opcion2;
    this->opcion3=opcion3;
    this->opcion4=opcion4;
    this->opcionCorrecta=opcionCorrecta;
}
int Pregunta::getPregunta(){
    return this->pregunta;
}
void Pregunta::setPregunta(string pregunta){
    this->pregunta=pregunta;
}
string Pregunta::getOpcion1(){
    return this->Opcion1;
}
void Pregunta::setOpcion1(string opcion1){
    this->opcion1=opcion1;
}
string Pregunta::getOpcion2(){
    return this->Opcion2;
}
void Pregunta::setOpcion2(string opcion2){
    this->opcion2=opcion2;
}
string Pregunta::getOpcion3(){
    return this->Opcion3;
}
void Pregunta::setOpcion3(string opcion3){
    this->opcion3=opcion3;
}
string Pregunta::getOpcion4(){
    return this->Opcion4;
}
void Pregunta::setOpcion4(string opcion4){
    this->opcion4=opcion4;
}
string Pregunta::getOpcionCorrecta(){
    return this->opcionCorrecta;
}
void Pregunta::setOpcionCorrecta(string opcionCorrecta){
    this->opcionCorrecta=opcionCorrecta;
}
Pregunta::~Pregunta(){}