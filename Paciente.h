#ifndef PACIENTE_H
#define PACIENTE_H

#include <string>
#include "Cama.h"
#include "Doctor.h"


class Doctor;

class Cama;

int const MAXPACIENTE =200;

class Paciente {

private:

    std::string cedula;
    std::string nombre;
    std::string apellido;
    char sexo;
    std::string direccion;
    std::string patologia;
    std::string tipoCirugia;
    std::string estado;
    std::string prioridad;
    int fechaCirugia;
    Cama* pCama;
    Doctor* pDoctor;


public:

    Paciente();

    Paciente(const std::string &cedula, const std::string &nombre, const std::string &apellido, char sexo,
             const std::string &direccion, const std::string &patologia, const std::string &tipoCirugia,
             const std::string &estado, const std::string &prioridad, int fechaCirugia, Cama *pCama, Doctor *pDoctor);

    virtual ~Paciente();


    const std::string &getCedula() const;
    void setCedula(const std::string &cedula);


    const std::string &getNombre() const;
    void setNombre(const std::string &nombre);


    const std::string &getApellido() const;
    void setApellido(const std::string &apellido);


    char getSexo() const;
    void setSexo(char sexo);


    const std::string &getDireccion() const;
    void setDireccion(const std::string &direccion);


    const std::string &getPatologia() const;
    void setPatologia(const std::string &patologia);


    const std::string &getTipoCirugia() const;
    void setTipoCirugia(const std::string &tipoCirugia);


    const std::string &getEstado() const;
    void setEstado(const std::string &estado);


    const std::string &getPrioridad() const;
    void setPrioridad(const std::string &prioridad);


    int getFechaCirugia() const;
    void setFechaCirugia(int fechaCirugia);

    Cama *getPCama() const;
    void setPCama(Cama *pCama);

    Doctor *getPDoctor() const;
    void setPDoctor(Doctor *pDoctor);

    string tostring();

    string imprimirDatosPaciente();

    string informes();

	void cambiarCama(Cama*);

	void cambiarDoctor(Doctor*);


};


#endif //PACIENTE_H

