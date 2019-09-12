#ifndef DOCTOR_H
#define DOCTOR_H

#include <string>
#include "Paciente.h"
#include "Especialidad.h"

class Paciente;

class Especialidad;

class Doctor {

private:
    Doctor **pDoctor;
    int cantidad;
    int tamano;
    std::string nombre;
    std::string especialidad;
    Paciente *pPaciente;


public:

    Doctor(Doctor **pDoctor, int cantidad, int tamano);

    Doctor(const std::string &nombre, const std::string &especialidad, Paciente *pPaciente);

    virtual ~Doctor();

    Doctor **getPDoctor() const;

    void setPDoctor(Doctor **pDoctor);

    int getCantidad() const;

    void setCantidad(int cantidad);

    int getTamano() const;

    void setTamano(int tamano);

    const std::string &getNombre() const;

    void setNombre(const std::string &nombre);

    const std::string &getEspecialidad() const;

    void setEspecialidad(const std::string &especialidad);

    Paciente *getPPaciente() const;

    void setPPaciente(Paciente *pPaciente);

	virtual string tostring();
};

#endif //DOCTOR_H

