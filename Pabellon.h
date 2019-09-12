#ifndef PABELLON_H
#define PABELLON_H
#include <string>
#include "Cama.h"

class Cama;

class Pabellon {

private:
<<<<<<< HEAD
	// Pabellon *pPabellon;
	int _cantidad;
	int _numberoDeCamas;
	int _camas;
	char _genero;

public:
	Pabellon();
	Pabellon(char genero);
	// Pabellon() {}
	~Pabellon();

	std::string getPabellon();

	int getCantidad() const;
	void setCantidad(int cantidad);

	int getNumeroDeCamas();
	void setNumeroDeCamas(int camas);

	int getGenero() const;
	void setGenero(char genero);
=======

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
>>>>>>> 0bc6962a387566443391c828bbbbe42171d6d423

	bool addPabellon(char genero);
	
};
#endif //PABELLON_H
