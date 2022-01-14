main: Categoria.o DtJugador.o DtCategoria.o Ronda.o Pregunta.o DtRonda.o DtPregunta.o Jugador.o main.o
	g++ Categoria.o DtJugador.o DtCategoria.o Ronda.o Pregunta.o DtRonda.o DtPregunta.o Jugador.o main.o -o sistema

Categoria.o: Categoria.cpp

DtCategoria.o: DtCategoria.cpp

DtJugador.o: DtJugador.cpp

Pregunta.o: Pregunta.cpp

Ronda.o: Ronda.cpp

DtEspacial.o: DtEspacial.cpp

DtPregunta.o: DtPregunta.cpp

DtRonda.o: DtRonda.cpp

Jugador.o: Jugador.cpp

main.o: main.cpp

clean:
	rm -rf *.o sistema
	clear