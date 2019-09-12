#ifndef PABELLON_H
#define PABELLON_H
#include <string>
#include "Cama.h"

class Cama;

class Pabellon {

private:

	char iD;
	string genero;
	int numCamas;
	Cama *pCama;

public:

    Pabellon(char iD, const string &genero, int numCamas, Cama *pCama);

    Pabellon();

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
