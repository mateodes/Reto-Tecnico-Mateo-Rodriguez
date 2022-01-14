#ifndef DTPREGUNTA
#define DTPREGUNTA
#include<string>
#include<iostream>
using namespace std;
class DtPregunta{
    private:
        string pregunta;
        string opcion1;
        string opcion2;
        string opcion3;
        string opcion4;
        int opcionCorrecta;
    public:
        DtPregunta();
        DtPregunta(string,string,string,string,string,int);
        string getPregunta();
        string getOpcion1();
        string getOpcion2();
        string getOpcion3();
        string getOpcion4();
        string getOpcionCorrecta();

        friend ostream& operator <<(ostream&,const DtPregunta&);
};
#endif