#include "DtJugador.h"
#include "Jugador.h"
#include "DtCategoria.h"
#include "Categoria.h"
#include "DtRonda.h"
#include "Ronda.h"
#include "DtPregunta.h"
#include "Pregunta.h"
#include <iostream>
#define MAX_RONDAS 5
#define MAX_CATEGORIAS 5
#define MAX_PREGUNTAS 100
#define MAX_JUGADORES 100

struct Rondas{
  Ronda* r[MAX_RONDAS];
  int tope;
} colRondas;

struct Categorias{
  Categoria* c[MAX_CATEGORIAS];
  int tope;
} colCATEGORIAS;

struct Jugadores{
  Jugador* j[MAX_JUGADORES];
  int tope;
} colJugadores;


//CREACION 5 RONDAS

void agregarRondas(int numRonda, int premio){
      Ronda* ronda = new Ronda(numRonda,premio);
      colRonda.r[colRonda.tope]=ronda;
      colRonda.tope++;
}

for(int j=0;j<5;j++){
    int numRonda=1;
    int premio=1;
    agregarRondas(numRonda,premio);
    numRonda++;
    premio=premio+2;
}

//CREACION 5 CATEGORIAS

void agregarCategorias(int nivel,int cantPreguntas){
      Categoria* categoria = new Categoria(nive,cantPreguntasl);
      colCategoria.c[colCategoria.tope]=categoria;
      colCategoria.tope++;
}

for(int j=0;j<5;j++){
    int nivel=1;
    int cantPreguntas=0;
    agregarCategorias(nivel,premio);
    nivel++;
}

//OPCION AGREGAR NUEVAS PREGUNTAS 
void agregarPregunta(int categoria,string pregunta, string opcion1, string opcion2, string opcion3, string opcion4, int opcionCorrecta);
void menuAgregarPregunta(){
  system("clear");
  cout << "_________________________________" << endl;
  cout << "______AGREGAR PREGUNTA___________" << endl;
  string pregunta, opcion1, opcion2, opcion3, opcion4;
  int opcionCorrecta, categoria;
  cout << "INGRESE PREGUNTA: ";
  cin >> opcion1;
  cout << "INGRESE LA RESPUESTA OPCION 1: ";
  cin >> opcion1;
  cout << "INGRESE LA RESPUESTA OPCION 2: ";
  cin >> opcion2;
  cout << "INGRESE LA RESPUESTA OPCION 3: ";
  cin >> opcion3;
  cout << "INGRESE LA RESPUESTA OPCION 4: ";
  cin >> opcion4;
  cout << "INDIQUE LA OPCION CORRECTA ENTRE 1 Y 4: ";
  cin >> opcionCorrecta;
  cout << "INDIQUE EL NIVEL DE CATEGORIA DE LA PREGUNTA ENTRE 1 Y 5: ";
  cin >> categoria;
  

  try{
    agregarPregunta(categoria,pregunta,opcion1,opcion2,opcion3,opcion4,opcionCorrecta);
  } catch(invalid_argument& e){
    cout << e.what() << endl;
    system("sleep 5");
  }
}
void agregarPregunta(int categoria,string pregunta, string opcion1, string opcion2, string opcion3, string opcion4, int opcionCorrecta){
  Pregunta* p = new Pregunta(pregunta,opcion1,opcion2,opcion3,opcion4,opcionCorrecta);
  colCATEGORIAS.c[categoria]->agregarPregunta(p);
}
// INICIAR JUEGO

DtPregunta** preguntasDeCategoria(int categoria);
DtRonda** DictarRonda(int ronda);
void agregarJugador(string nombre, int premio);

void iniciarJuego(){
  bool finjuego = true;
  int ronda = 0;
  int categoria = 0;
  int opcion;
  string nombre;
  int premio = 0;
  int continuar;

  cout << "________________________________" << endl;
  cout << "________INGRESE SU NOMBRE_______" << endl;
  cin >> nombre;
  while(finjuego==true && ronda<5){
    system("clear");
      cout << "________________________________" << endl;
      cout << "____PREGUNTA POR RONDA______" << endl;
    DtRonda** Ronda = DictarRonda(ronda);
    DtPregunta** pregunta = preguntasDeCategoria(categoria);
    cout << "ESCOJA UNA OPCION: " << endl;
    cin  >> opcion;
    if (opcion==pregunta->getOpcionCorrecta){
      premio=premio+Ronda->getPremio();
      cout << "USTED ESCOJIO LA OPCION CORRECTA" << endl;
      cout << "SI DESEA CONTINUAR CON EL JUEGO PRECIONE 1" << endl;
      cin >> continuar;
      if(continuar!=1){
        finjuego=false;
      }
      ronda++;
      categoria++;
    }else{
      cout << "USTED A FALLADO, FIN DEL JUEGO" << endl;
      premio = 0;
      finjuego = false;
    }
    agregarJugador(nombre,premio);

      system("sleep 5");
  }
}
DtPregunta** preguntasDeCategoria(int categoria){
    DtPregunta** pregunta = colCATEGORIAS.c[categoria]->getDtPreguntas();
  return pregunta;
}

DtRonda** DictarRonda(int ronda){
  DtRonda** ronda = colRondas.r[ronda]->GetRonda();
  return ronda;
}

void agregarJugador(string nombre, int premio){
      Jugador* jugador = new Jugador(nombre,premio,);
      colJugadores.j[colJugador.tope]=jugadorr;
      colJugadores.tope++;  
}

// MENU INICIAL

void menu(){
    system("clear");
    cout << "________________________________________" << endl;
    cout << "_____________RETO TECNICO_______________" << endl;
    cout << "1. Agregar Preguntas" << endl;
    cout << "2. Iniciar Juego" << endl;
    cout << "3. Salir" << endl;
    cout << "________________________________________" << endl;
    cout << "Indique su eleccion: " ;
}

int main(){
  colRondas.tope=0;
  colCATEGORIAS.tope=0;
  menu();
  int opcion;
  cin >> opcion;
  while(opcion!=3){
    switch(opcion){
      case 1: menuAgregarPregunta();
              break;
      case 2: iniciarJuego();
              break;
    }
    menu();
    cin >> opcion;
  }
}