#ifndef ESPECIALIDAD_H
#define ESPECIALIDAD_H

#include <iostream>
#include <string>

using namespace std;

const int MAXIMA = 10;

class Especialidad {

private:

    int tamano;
    int cantidad;
    string especialidad;
    Especialidad **pEspecialidad;

public:

    Especialidad(const string &especialidad);

    Especialidad(int tamano, int cantidad, Especialidad **pEspecialidad);

    virtual ~Especialidad();

    const string &getEspecialidad() const;

    void setEspecialidad(const string &especialidad);

    Especialidad **getPEspecialidad() const;

    void setPEspecialidad(Especialidad **pEspecialidad);

    int getTamano() const;

    void setTamano(int tamano);

    int getCantidad() const;

    void setCantidad(int cantidad);
};
#endif //ESPECIALIDAD_H

