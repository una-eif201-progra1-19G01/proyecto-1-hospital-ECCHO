#ifndef ESPECIALIDAD_H
#define ESPECIALIDAD_H

#include <iostream>
#include <string>

using namespace std;

class Especialidad {

private:

    string especialidad;

public:

    Especialidad(const string &especialidad);

    virtual ~Especialidad();

    const string &getEspecialidad() const;

    void setEspecialidad(const string &especialidad);

	std::string toStringEspecialidad();
};
#endif //ESPECIALIDAD_H

