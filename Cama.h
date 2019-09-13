#ifndef CAMA_H
#define CAMA_H

#include <string>
#include "Paciente.h"
using namespace std;

class Paciente;

class Cama {
private:
    int cantidad;
    int tamano;
    Cama **pCama;
    std::string codigo;
    bool estado;
    Paciente *ePaciente;
    int numero;
public:
    Cama();

    Cama(const string &codigo, bool estado, Paciente *ePaciente);

    Cama(int cantidad, int tamano, Cama **pCama);

    virtual ~Cama();

    int getCantidad() const;

    int getTamano() const;

    Cama **getPCama() const;

    const string &getCodigo() const;

    bool isEstado() const;

    Paciente *getEPaciente() const;

    void setCantidad(int cantidad);

    void setTamano(int tamano);

    void setPCama(Cama **pCama);

    void setCodigo(const string &codigo);

    void setEstado(bool estado);

    void setEPaciente(Paciente *ePaciente);

	void agregar(Cama* pCam);

	Cama* buscarCama(string codigo);

	string toStringCama();

    bool getEstado();

};
#endif //CAMA_H

