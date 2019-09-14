#ifndef PABELLON_H
#define PABELLON_H

#include <string>
#include "Cama.h"
#include "arregloCama.h"


class Cama;

int const MAXIMOPABE = 10;

class Pabellon{

private:

    char iD;
    string genero;
    int numCamas;
    arregloCama *pCama;


public:

    Pabellon(char iD, const string &genero, int numCamas, arregloCama*pCama);

    Pabellon();


    char getId() const;

    const string &getGenero() const;

    int getNumCamas() const;

    arregloCama *getPCama() const;

    void setId(char iD);

    void setGenero(const string &genero);

    void setNumCamas(int numCamas);

    void setPCama(arregloCama *pCama);

	string toString();

	string imprimeDisponiblidadDeCamas();

	void cambiarCamas(string);

	void modificarCama(char, int);



};

#endif //PABELLON_H
