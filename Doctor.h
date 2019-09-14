#ifndef DOCTOR_H
#define DOCTOR_H

#include <string>
#include "arregloPaciente.h"
#include "Especialidad.h"

class arregloPaciente;
class Especialidad;
class Doctor{

private:

    std::string nombre;
    std::string especialidad;
    arregloPaciente *pPaciente;


public:

    Doctor(const std::string &nombre, const std::string &especialidad, arregloPaciente *pPaciente);

    virtual ~Doctor();

    const std::string &getNombre() const;

    void setNombre(const std::string &nombre);

    const std::string &getEspecialidad() const;

    void setEspecialidad(const std::string &especialidad);

    arregloPaciente *getPPaciente() const;

    void setPPaciente(arregloPaciente *pPaciente);

	virtual string tostring();

	void modificarArray(string);
};

#endif //DOCTOR_H