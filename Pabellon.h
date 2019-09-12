#ifndef PABELLON_H
#define PABELLON_H
#include <string>
#include "Cama.h"
#include "Paciente.h"

class Pabellon {
private:
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

	bool addPabellon(char genero);
	
};
#endif //PABELLON_H
