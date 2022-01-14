#include "Categoria.h"
Categoria::Categoria(){}
Categoria::Categoria(int nivel){
    this->nivel=nivel;
}
int Categoria::GetNivel(){
    return this->nivel;
}
void Categoria::setNivel(int nivel){
  this->nivel=nivel;
}
int Categoria::getCantPreguntas(){
  return this->cantPreguntas;
}
void Categoria::agregarPregunta(Pregunta* pregunta){
  this->preguntas[this->cantPreguntas]=pregunta;
  this->cantPreguntas++;
}

DtPregunta** Categoria::getDtPreguntas(){
    int random = rand() % this->cantPreguntas;
  DtPregunta** dtPreguntas = new DtPregunta*[this->cantPreguntas];
  for(int i=0;i<random;i++){
      while(i<this->cantPreguntas && this->cantPreguntas[i]==random){
        DtPregunta* dtp = new DtPregunta(
                                this->preguntas[i]->getPregunta(),
                                this->preguntas[i]->getOpcion1(),
                                 this->preguntas[i]->getOpcion2(),
                                 this->preguntas[i]->getOpcion3(),
                                 this->preguntas[i]->getOpcion4(),
                                 this->preguntas[i]->getOpcionCorrecta());
        dtPreguntas[i]=dtp;
      }
    }
  return dtPreguntas;
}
