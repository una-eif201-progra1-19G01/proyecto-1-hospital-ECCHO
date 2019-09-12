#ifndef PABELLON_H
#define PABELLON_H

#include <string>
#include "Cama.h"


class Cama;

int const MAXIMOPABE = 10;

class Pabellon{

private:

    char iD;
    string genero;
    int numCamas;
    Cama *pCama;
    int cantidad;
    int tamano;
    Pabellon **pPabellon;

public:

    Pabellon(char iD, const string &genero, int numCamas, Cama *pCama);

    Pabellon(int cantidad, int tamano, Pabellon **pPabellon);

    Pabellon();

    int getCantidad() const;

    void setCantidad(int cantidad);

    int getTamano() const;

    void setTamano(int tamano);

    Pabellon **getPPabellon() const;

    void setPPabellon(Pabellon **pPabellon);

    virtual ~Pabellon();

    char getId() const;

    const string &getGenero() const;

    int getNumCamas() const;

    Cama *getPCama() const;

    void setId(char iD);

    void setGenero(const string &genero);

    void setNumCamas(int numCamas);

    void setPCama(Cama *pCama);

};

#endif //PABELLON_H
