#ifndef ESPECIALIDAD_H
#define ESPECIALIDAD_H

#include <iostream>
#include <string>
<<<<<<< HEAD
class Especialidad {
private:
	int especialidad[];
public:
	Especialidad();
	// Especialidad();
=======
using namespace std;
>>>>>>> 0bc6962a387566443391c828bbbbe42171d6d423


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

