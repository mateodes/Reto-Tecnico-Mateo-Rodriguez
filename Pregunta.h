#ifndef PREGUNTA
#define PREGUNTA
#include<string>
using namespace std;
class Pregunta{
    private:
        string pregunta;
        string opcion1;
        string opcion2;
        string opcion3;
        string opcion4;
        int opcionCorrecta;
    public:
        Pregunta(string,string,string,string,string,int);
        int getPregunta();
        void setPregunta(string);
        string getOpcion1();
        void setOpcion1(string);
        string getOpcion2();
        void setOpcion2(string);
        string getOpcion3();
        void setOpcion3(string);
        string getOpcion4();
        void setOpcion4(string);
        int getOpcionCorrecta();
        void setOpcionCorrecta(int);
        ~Pregunta();

};
#endif