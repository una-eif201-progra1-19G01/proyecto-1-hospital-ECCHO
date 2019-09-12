#ifndef ESPECIALIDAD_H
#define ESPECIALIDAD_H

#include <iostream>
#include <string>
using namespace std;


class Especialidad {

private:

    string especialidad;
    Especialidad **pEspecialidad;

public:

    Especialidad(const string &especialidad);

    Especialidad(Especialidad **pEspecialidad);

    virtual ~Especialidad();

    const string &getEspecialidad() const;

    void setEspecialidad(const string &especialidad);

    Especialidad **getPEspecialidad() const;

    void setPEspecialidad(Especialidad **pEspecialidad);
};
#endif //ESPECIALIDAD_H

