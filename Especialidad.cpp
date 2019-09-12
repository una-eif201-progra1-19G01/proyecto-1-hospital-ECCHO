#include<string>
#include"Especialidad.h"
using::std::string;

<<<<<<< HEAD
Especialidad::Especialidad() {}
// Especialidad::Especialidad() {}
// Especialidad::~Especialidad() {}
=======
Especialidad::Especialidad(const string &especialidad) : especialidad(especialidad) {}

Especialidad::Especialidad(Especialidad **pEspecialidad) : pEspecialidad(pEspecialidad) {}

Especialidad::~Especialidad() {}

const string &Especialidad::getEspecialidad() const {
    return especialidad;
}

void Especialidad::setEspecialidad(const string &especialidad) {
    Especialidad::especialidad = especialidad;
}

Especialidad **Especialidad::getPEspecialidad() const {
    return pEspecialidad;
}

void Especialidad::setPEspecialidad(Especialidad **pEspecialidad) {
    Especialidad::pEspecialidad = pEspecialidad;
}


>>>>>>> 0bc6962a387566443391c828bbbbe42171d6d423
