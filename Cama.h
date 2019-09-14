#ifndef CAMA_H
#define CAMA_H

#include <string>
#include "Paciente.h"
using namespace std;

class Paciente;

class Cama {
private:

    std::string codigo;
    bool estado;
    Paciente *ePaciente;

public:
    Cama();

    Cama(const string &codigo, bool estado, Paciente *ePaciente);

    virtual ~Cama();

    const string &getCodigo() const;

    bool isEstado() const;

    Paciente *getEPaciente() const;

    void setCodigo(const string &codigo);

    void setEstado(bool estado);

    void setEPaciente(Paciente *ePaciente);

    string toString();
};
#endif //CAMA_H

