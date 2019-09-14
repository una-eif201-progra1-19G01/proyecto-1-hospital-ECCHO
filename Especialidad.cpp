#include<string>
#include"Especialidad.h"
#include<sstream>
#include<iostream>


using ::std::string;


Especialidad::Especialidad(const string &especialidad) : especialidad(especialidad) {}


Especialidad::~Especialidad() {
}

const string &Especialidad::getEspecialidad() const {
    return especialidad;
}

void Especialidad::setEspecialidad(const string &especialidad) {
    Especialidad::especialidad = especialidad;
}


string Especialidad::toStringEspecialidad() {
    stringstream s;

    s<<especialidad<<"\n";
    return s.str();
}